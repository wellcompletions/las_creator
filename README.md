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

C:\User\>LasCreator.exe lastextfile.txt yourlasfile.LAS




