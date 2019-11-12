##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Assignment2Codelite
ConfigurationName      :=Debug
WorkspacePath          :="C:/3305-Data-Structures/DataStructures Lecture"
ProjectPath            :="C:/3305-Data-Structures/DataStructures Lecture/Assignment2Codelite"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=muhia
Date                   :=04/09/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Assignment2Codelite.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  -static-libgcc -static-libstdc++
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/up_up_Assignment2_rationalImp.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_Assignment2_main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/up_up_Assignment2_rationalImp.cpp$(ObjectSuffix): ../../Assignment2/rationalImp.cpp $(IntermediateDirectory)/up_up_Assignment2_rationalImp.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/3305-Data-Structures/Assignment2/rationalImp.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Assignment2_rationalImp.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Assignment2_rationalImp.cpp$(DependSuffix): ../../Assignment2/rationalImp.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Assignment2_rationalImp.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Assignment2_rationalImp.cpp$(DependSuffix) -MM ../../Assignment2/rationalImp.cpp

$(IntermediateDirectory)/up_up_Assignment2_rationalImp.cpp$(PreprocessSuffix): ../../Assignment2/rationalImp.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Assignment2_rationalImp.cpp$(PreprocessSuffix) ../../Assignment2/rationalImp.cpp

$(IntermediateDirectory)/up_up_Assignment2_main.cpp$(ObjectSuffix): ../../Assignment2/main.cpp $(IntermediateDirectory)/up_up_Assignment2_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/3305-Data-Structures/Assignment2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_Assignment2_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_Assignment2_main.cpp$(DependSuffix): ../../Assignment2/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_Assignment2_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_Assignment2_main.cpp$(DependSuffix) -MM ../../Assignment2/main.cpp

$(IntermediateDirectory)/up_up_Assignment2_main.cpp$(PreprocessSuffix): ../../Assignment2/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_Assignment2_main.cpp$(PreprocessSuffix) ../../Assignment2/main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


