import csv     # imports the csv module
import sys      # imports the sys module

f = open(sys.argv[1], 'r') # opens the csv file
g = open(sys.argv[2], 'w', newline='') # opens the workfile

try:
    fieldnames = ['DEPTH', 'CCL']  #sets fieldnames for workfile to write to
    writer = csv.DictWriter(g, fieldnames=fieldnames)
    reader = csv.DictReader(f)	# creates the reader object
    writer.writeheader() #writes first header line
    for row in reader:   # iterates the rows of the file in orders
        if reader.line_num == 2: # check to see if its the first record
           depthBtm = int(row['BTM'])
           depthCtr = depthBtm - 1
           print (float(depthBtm),"  ",1.0,"  ",depthCtr,"  ---")
           writer.writerow({'DEPTH':float(depthBtm),'CCL':1.5})
        else: #not the first record create new depths
           while depthCtr != int(row['BTM']):
                print (float(depthCtr),"  ",0.1,"  ",int(row['BTM']),"   | |")
                writer.writerow({'DEPTH':float(depthCtr),'CCL':0.0})
                depthCtr = depthCtr - 1
           print (float(depthCtr),"  ",1.0,"  ","Collar","  ---")
           writer.writerow({'DEPTH':float(depthCtr),'CCL':1.0})
           depthCtr = depthCtr - 1
           
finally:
    print (depthBtm)
    f.close()
    g.close() # closing