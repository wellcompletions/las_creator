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

[Text File Example]

20001
19960
19921
19882
19845

Usage example:
C:\User\>LasCreator.exe lastextfile.txt yourlasfile.LAS

## Compiling

Linux:
g++ -o ouputfile Source.cpp -static-libgcc -static-libstdc++

Windows:
g++ -o ouputfile.exe Source.cpp -static-libgcc -static-libstdc++

## Output example
[sample.LAS]


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
19971.0000     0.0000
19970.0000     0.0000
19969.0000     0.0000
19968.0000     0.0000
19967.0000     0.0000
19966.0000     0.0000
19965.0000     0.0000
19964.0000     0.0000
19963.0000     0.0000
19962.0000     0.0000
19961.0000     0.0000
19960.0000     1.0000
19959.0000     0.0000
19958.0000     0.0000
19957.0000     0.0000
19956.0000     0.0000
19955.0000     0.0000
19954.0000     0.0000
19953.0000     0.0000
19952.0000     0.0000
19951.0000     0.0000
19950.0000     0.0000
19949.0000     0.0000
19948.0000     0.0000
19947.0000     0.0000
19946.0000     0.0000
19945.0000     0.0000
19944.0000     0.0000
19943.0000     0.0000
19942.0000     0.0000
19941.0000     0.0000
19940.0000     0.0000
19939.0000     0.0000
19938.0000     0.0000
19937.0000     0.0000
19936.0000     0.0000
19935.0000     0.0000
19934.0000     0.0000
19933.0000     0.0000
19932.0000     0.0000
19931.0000     0.0000
19930.0000     0.0000
19929.0000     0.0000
19928.0000     0.0000
19927.0000     0.0000
19926.0000     0.0000
19925.0000     0.0000
19924.0000     0.0000
19923.0000     0.0000
19922.0000     0.0000
19921.0000     1.0000
19920.0000     0.0000
19919.0000     0.0000
19918.0000     0.0000
19917.0000     0.0000
19916.0000     0.0000
19915.0000     0.0000
19914.0000     0.0000
19913.0000     0.0000
19912.0000     0.0000
19911.0000     0.0000
19910.0000     0.0000
19909.0000     0.0000
19908.0000     0.0000
19907.0000     0.0000
19906.0000     0.0000
19905.0000     0.0000
19904.0000     0.0000
19903.0000     0.0000
19902.0000     0.0000
19901.0000     0.0000
19900.0000     0.0000
19899.0000     0.0000
19898.0000     0.0000
19897.0000     0.0000
19896.0000     0.0000
19895.0000     0.0000
19894.0000     0.0000
19893.0000     0.0000
19892.0000     0.0000
19891.0000     0.0000
19890.0000     0.0000
19889.0000     0.0000
19888.0000     0.0000
19887.0000     0.0000
19886.0000     0.0000
19885.0000     0.0000
19884.0000     0.0000
19883.0000     0.0000
19882.0000     1.0000
19881.0000     0.0000
19880.0000     0.0000
19879.0000     0.0000
19878.0000     0.0000
19877.0000     0.0000
19876.0000     0.0000
19875.0000     0.0000
19874.0000     0.0000
19873.0000     0.0000
19872.0000     0.0000
19871.0000     0.0000
19870.0000     0.0000
19869.0000     0.0000
19868.0000     0.0000
19867.0000     0.0000
19866.0000     0.0000
19865.0000     0.0000
19864.0000     0.0000
19863.0000     0.0000
19862.0000     0.0000
19861.0000     0.0000
19860.0000     0.0000
19859.0000     0.0000
19858.0000     0.0000
19857.0000     0.0000
19856.0000     0.0000
19855.0000     0.0000
19854.0000     0.0000
19853.0000     0.0000
19852.0000     0.0000
19851.0000     0.0000
19850.0000     0.0000
19849.0000     0.0000
19848.0000     0.0000
19847.0000     0.0000
19846.0000     0.0000
19845.0000     1.0000