#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW_TDM-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/AlgoritmosArbol.o \
	${OBJECTDIR}/Arbol/NodoLH.o \
	${OBJECTDIR}/Arbol/arrSPadre.o \
	${OBJECTDIR}/Arbol/hijoIzqHD1.o \
	${OBJECTDIR}/Arbol/hijoIzqHD2.o \
	${OBJECTDIR}/Arbol/hijoIzqHD3.o \
	${OBJECTDIR}/Arbol/listaHijos.o \
	${OBJECTDIR}/Cola/arrCircular.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tp1-ci-1221-ii-3ra.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tp1-ci-1221-ii-3ra.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tp1-ci-1221-ii-3ra ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/AlgoritmosArbol.o: AlgoritmosArbol.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AlgoritmosArbol.o AlgoritmosArbol.cpp

${OBJECTDIR}/Arbol/NodoLH.o: Arbol/NodoLH.cpp
	${MKDIR} -p ${OBJECTDIR}/Arbol
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arbol/NodoLH.o Arbol/NodoLH.cpp

${OBJECTDIR}/Arbol/arrSPadre.o: Arbol/arrSPadre.cpp
	${MKDIR} -p ${OBJECTDIR}/Arbol
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arbol/arrSPadre.o Arbol/arrSPadre.cpp

${OBJECTDIR}/Arbol/hijoIzqHD1.o: Arbol/hijoIzqHD1.cpp
	${MKDIR} -p ${OBJECTDIR}/Arbol
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arbol/hijoIzqHD1.o Arbol/hijoIzqHD1.cpp

${OBJECTDIR}/Arbol/hijoIzqHD2.o: Arbol/hijoIzqHD2.cpp
	${MKDIR} -p ${OBJECTDIR}/Arbol
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arbol/hijoIzqHD2.o Arbol/hijoIzqHD2.cpp

${OBJECTDIR}/Arbol/hijoIzqHD3.o: Arbol/hijoIzqHD3.cpp
	${MKDIR} -p ${OBJECTDIR}/Arbol
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arbol/hijoIzqHD3.o Arbol/hijoIzqHD3.cpp

${OBJECTDIR}/Arbol/listaHijos.o: Arbol/listaHijos.cpp
	${MKDIR} -p ${OBJECTDIR}/Arbol
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arbol/listaHijos.o Arbol/listaHijos.cpp

${OBJECTDIR}/Cola/arrCircular.o: Cola/arrCircular.cpp
	${MKDIR} -p ${OBJECTDIR}/Cola
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Cola/arrCircular.o Cola/arrCircular.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
