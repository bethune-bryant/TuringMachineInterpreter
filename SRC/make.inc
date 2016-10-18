
UNAME=$(shell uname -s)

ifeq ($(UNAME),Linux)
PLATFORM = Linux
else ifeq ($(UNAME),Darwin)
PLATFORM = Mac
else
PLATFORM = Windows
endif

SLC = "$(SL_HOME)/bin/slc"

VS_SETENV = "C:/Program Files (x86)/Microsoft Visual Studio 12.0/VC/vcvarsall.bat" x86_amd64
MS_BUILD = C:/Windows/Microsoft.NET/Framework/v4.0.30319/MSBuild.exe

CPP = g++
CFLAGS = -O3 -msse3 -I $(SL_HOME)/include
LFLAGS = -L $(SL_HOME)/lib
SL_LIBS = -lslrt -ltbb -lpthread

ALL: $(PLATFORM)

Windows: ../BIN/Windows64/$(DEMO).exe

Linux: ../BIN/Linux64/$(DEMO)
	
Mac: 

../BIN/Windows64/$(DEMO).exe: SL_Generated.cpp SL_Generated.h $(DEMO).cpp | ../BIN/Windows64
	echo '$(VS_SETENV) && cl /nologo /EHs /Ox /MD /Zi /Fe../BIN/Windows64/$(DEMO).exe "/I$(SL_HOME)/include" /F 500000000 "$(DEMO).cpp" "SL_Generated.cpp" /link /LTCG /STACK:500000000,500000000 /NODEFAULTLIB:LIBCMT.LIB "/libpath:$(SL_HOME)/lib" "/libpath:$(SL_HOME)/lib/vs12" slrt.lib shell32.lib user32.lib gdi32.lib tbb.lib tbbmalloc.lib' > ./compile.bat
	chmod +x ./compile.bat
	./compile.bat
	rm ./compile.bat

../BIN/Linux64/$(DEMO): SL_Generated.cpp SL_Generated.h $(DEMO).cpp | ../BIN/Linux64
	$(CPP) $(CFLAGS) -c $(DEMO).cpp -o $(DEMO).obj
	$(CPP) $(CFLAGS) -c SL_Generated.cpp -o SL_Generated.obj
	$(CPP) $(LFLAGS) $(DEMO).obj SL_Generated.obj $(SL_LIBS) -lX11 -o ../BIN/Linux64/$(DEMO)
	
SL_Generated.h SL_Generated.cpp: $(DEMO).sl
	$(SLC) $(SL_FLAGS) -c $(DEMO).sl -o SL_Generated

../BIN/Windows64:
	mkdir -p ../BIN/Windows64
	
../BIN/Linux64:
	mkdir -p ../BIN/Linux64
	
clean:
	rm -rf SL_Generated.cpp SL_Generated.h *.obj *.pdb ../BIN/$(PLATFORM)64/*.pdb
	
cleanbin: 
	rm -rf SL_Generated.cpp SL_Generated.h *.obj *.pdb ../BIN/$(PLATFORM)64/*
