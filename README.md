# Las Creator

Takes a text file of casing collar depths and creates an importable Log ASCII Standard file, commonly used in well logging programs to facilitate having a 'bible pass' during the first perforating run into a well.

## Getting Started

Currently ported for Linux and Windows.

LasCreator (c) Jason Turner 2016
[LasCreator.WellCompletions.Com]

Creates a ASCII Las logging file from a Casing Tally.

LASCREATOR.EXE [source] [destination] 

source          Specifies the file that contains Casing Collar depths (one depth per line)
destination     Specifies the location and name of the new Las file.


Usage: LasCreator.exe inputfile.txt outputfile.las
Or, alternatly you can enter the filenames at the Prompt.

The depths need to be in descending order with no decimal places or commas, with only one depth per line.

## Compiling

Linux:
g++ -o ouputfile Source.cpp -static-libgcc -static-libstdc++

Windows:
g++ -o ouputfile.exe Source.cpp -static-libgcc -static-libstdc++

## Input example

[input.txt]

```
20001
19960
19921
19882
19845
```

Usage example:
C:\User\>LasCreator.exe lastextfile.txt yourlasfile.LAS



## Output example
[sample.LAS]

``` 
~Version Information
VERS.                      2.0: CWLS Log ASCII Standard - VERSION 2.0
WRAP.                       NO: One line per depth step
~Well Information Block
STRT.FT             20001.0000: START DEPTH
STOP.FT             19845.0000: STOP DEPTH
STEP.FT                -1.0000: STEP
NULL.                -999.2500: NULL VALUE
COMP.                         : COMPANY
WELL.                         : WELL
FLD.                          : FIELD
LOC.                          : LOCATION
DATE.                         : LOG DATE
SECT.                         : SECTION
SECT.                         : SECTION
TOWN.                         : TOWNSHIP
RANG.                         : RANGE
API.                          : API#
OS.                           : OTHER SERVICES
PDAT.FT                       : PERMANENT DATUM
EEL.FT                        : ELEVATION
LMF.FT                        : LOG MEASURED FROM
DMF.FT                        : DRILLING MEASURED FROM
EKB.FT                        : KB
EDF.FT                        : DF
EGL.FT                        : GL
DATE1.                        : DATE1
RUN1.                         : RUN NUMBER
TDD1.FT                       : DEPTH DRILLER
TDL1.FT                       : DEPTH LOGGER
BLI1.FT                       : BOTTOM LOGGED INTERVAL
TLI1.FT                       : TOP LOG INTERVAL
CDD1.IN_FT                    : CASING DRILLER
CDL1.FT                       : CASING LOGGER
BS1.IN                        : BIT SIZE
DFT1.                         : TYPE FLUID IN HOLE
DFDV1.GM/C3_CP                : DENSITY/VISCOSITY
DFPL1.C3                      : PH/FLUID LOSS
MSS1.                         : SOURCE OF SAMPLE
RMT1.OHHM_DEGF                : RM@MEASURED TEMP
RMFT1.OHMM_DEGF               : RMF@MEASURED TEMP
RMCT1.OHMM_DEGF               : RMC@MEASURED TEMP
RMFS1.                        : SOURCE OF RMF/RMC
RMBT1.OHMM_DEGF               : RM@BHT
TCS1.                         : TIME CIRCULATION STOPPED
TLOB1.                        : TIME LOGGER ON BOTTOM
BHT1.DEGF                     : MAXIMUM RECORDED TEMPERATURE
LUN1.                         : EQUIPMENT NUMBER
LUL1.                         : LOCATION
ENGI1.                        : RECORDED BY
WITN1.                        : WITNESSED BY
~Curve Information Block
CCL.                         0: Casing Collar Locator
DEPT.FT            0 000 00 00: Depth
~Parameter Information Block
~A  Depth       CCL
20001.0000     1.0000
20000.0000     0.0000
19999.0000     0.0000
19998.0000     0.0000
19997.0000     0.0000
19996.0000     0.0000
19995.0000     0.0000
19994.0000     0.0000
19993.0000     0.0000
19992.0000     0.0000
19991.0000     0.0000
19990.0000     0.0000
19989.0000     0.0000
19988.0000     0.0000
19987.0000     0.0000
19986.0000     0.0000
19985.0000     0.0000
19984.0000     0.0000
19983.0000     0.0000
19982.0000     0.0000
19981.0000     0.0000
19980.0000     0.0000
19979.0000     0.0000
19978.0000     0.0000
19977.0000     0.0000
19976.0000     0.0000
19975.0000     0.0000
19974.0000     0.0000
19973.0000     0.0000
19972.0000     0.0000
```