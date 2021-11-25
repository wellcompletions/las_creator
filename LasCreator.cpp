#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <math.h> 
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

	int depthCtr = 0;
	int lasLen = 0;
	int bottomMax;
	int topMax;
	string strdepth;
	float depth;
	float depthNums[1000];
	int depthNumLen = 0;
	string las[50000] ;
	string inputFile = "";
	string outputFile = "";
	string instr = "";
	
	ifstream depthFile;
	// check to see if the proper amount of args were entered
	if ( argc == 3){
		inputFile = argv[1];
		outputFile = argv[2];
		} 
	else if( argc == 2 ) {

			if ((strcmp(argv[1], "/?") == 0) || (strcmp(argv[1], "-help") == 0) || (strcmp(argv[1], "--help") == 0) ){
				cout << "\nLasCreator (c) Jason Turner 2021\n";
				cout << "[LasCreator.WellCompletions.Com]\n\n";
				cout << "Creates a ASCII Las logging file from a Casing Tally.\n\n";
				cout << "LasCreator.exe [source] [destination] \n\n";
				cout << "source          Specifies the file that contains Casing Collar depths (one depth per line)\n";
				cout << "destination     Specifies the location and name of the new Las file.\n";
				cout << "\n\n";
				cout << "Usage: LasCreator.exe inputfile.txt outputfile.las\n";
				// cout << "Alternatively you can enter the requested filenames at the Prompt.\n\n";
				cout << "The depths need to be in descending order, with only one depth per line.\n\n";
				cout << "[Text File Example]\n\n";
				cout << "20001\n";
				cout << "19960\n";
				cout << "19921\n";
				cout << "19882\n";
				cout << "19845\n\n";
				system("pause");
				return 0;
			}
		
		}
	
	else {
		// cout << "LasCreator (c) Jason Turner 2021\n";
		// cout << "[LasCreator.WellCompletions.Com]\n\n";
		// cout << "[MANUAL ENTRY]\n\n";
		// cout << "Enter the name of the Casing tally text file [ex: F:\\tally.txt]:\n";
		// getline(cin, inputFile);
		// cout << "Enter the name of the Output filename [ex. F:\\somelasfile.las\n";
		// getline(cin, outputFile);
		// return 1;
		cout << "\nLasCreator (c) Jason Turner 2021\n";
		cout << "[LasCreator.WellCompletions.Com]\n\n";
		cout << "Creates a ASCII Las logging file from a Casing Tally.\n\n";
		cout << "LasCreator.exe [source] [destination] \n\n";
		cout << "source          Specifies the file that contains Casing Collar depths (one depth per line)\n";
		cout << "destination     Specifies the location and name of the new Las file.\n";
		cout << "\n\n";
		cout << "Usage: LasCreator.exe inputfile.txt outputfile.las\n";
		cout << "The depths need to be in descending order, with only one depth per line.\n\n";
		cout << "[Text File Example]\n\n";
		cout << "20,001.02\n";
		cout << "19,960.35\n";
		cout << "19,921.29\n";
		cout << "19,882.41\n";
		cout << "19,845.35\n\n";
		system("pause");
		return 0;
	}


	// ------------------------------------
	// Build LAS File Header
                las[0] = "~Version Information\n";
                las[1] = "VERS.                      2.0: CWLS Log ASCII Standard - VERSION 2.0\n";
                las[2] = "WRAP.                       NO: One line per depth step\n";
                las[3] = "~Well Information Block\n";
                las[4] = "";
                las[5] = "";
                las[6] = "STEP.FT                -1.0000: STEP\n";
                las[7] = "NULL.                -999.2500: NULL VALUE\n";
                las[8] = "COMP.                         : COMPANY\n";
                las[9] = "WELL.                         : WELL\n";
                las[10] = "FLD.                          : FIELD\n";
                las[11] = "LOC.                          : LOCATION\n";
                las[12] = "SRVC.                         : SERVICE COMPANY\n";
                las[13] = "DATE.                         : LOG DATE\n";
                las[14] = "~Curve Information Block\n";
                las[15] = "DEPT.FT            0 000 00 00: Depth\n";
                las[16] = "CCL.                         0: Casing Collar Locator\n";
                las[17] = "~Parameter Information Block\n";
                las[18] = "~A  Depth       CCL\n"; 
				lasLen = 19;
				// END of LAS BUILD
				// -------------------------------------------


				// read in the data into an array 


	depthFile.open(inputFile.c_str());
	if(depthFile.is_open()){
		while (depthFile >> strdepth) {
			strdepth.erase(remove(strdepth.begin(), strdepth.end(), ','), strdepth.end());
			depth = stof(strdepth );
			depth = round(depth);
			depthNums[depthNumLen] = depth;
			// Look for duplicates
			// Then for ascending
			if(depthNumLen > 0 && depthNums[depthNumLen-1] == depth){
				depthNums[depthNumLen] = depth -1;
			} else if (depthNumLen > 0 && depthNums[depthNumLen-1] < depth){
				cout << depth;
				cout << "\n\nDepths must be in descending order.\n";
				cout << "Depth number " << depthNumLen << " is incorrect.\n";
				cout << "Depth " << depthNums[depthNumLen-1] << " < " << depth <<"\n\n";
				return 0; 
			}
			
			// print it out to test it
			cout << depthNums[depthNumLen] << "\n";

			depthNumLen++;
			
		}
		depthFile.close();
		cout << "\nA total of " << depthNumLen << " Joints found\n";// print out the number of casing joints (depthNumLen)
		
		// wait for user input to iterate and build the file 
		cout << "Press enter to continue ..."; 
    	cin.get();
	} 	else { 
		cout << "Unable to open file\n";
		cout << "Check that you have the directory correct?\n\n";
		return 0;
	}
	
	
	// parse the depths
	for (int i = 0; i < depthNumLen; i++) {
		if (i == 0) {
			// firstline in data
			bottomMax = depthNums[i];
			cout << depthNums[i] << ".0     1.0     *---\n"; // comment out for faster output
			stringstream ss;
			ss << depthNums[i] << ".0000     1.0000\n";
			las[lasLen] = ss.str();
			depthCtr = depthNums[i] - 1;
			lasLen++;

		} else {
			// Loop for all the other depths
			
				while (depthCtr != depthNums[i]) {
					//  cout << depthCtr << ".0     0.0     | |\n";
					stringstream ss;
					ss << depthCtr << ".0000     0.0000\n";
					las[lasLen] = ss.str();
					depthCtr--;
					lasLen++;
				}

				cout << depthNums[i] << ".0     1.0     ---\n";
				stringstream ss;
				ss << depthNums[i] << ".0000     1.0000\n";
				las[lasLen] = ss.str();
				depthCtr--;
				lasLen++;		    
		}
	}
	topMax = depthCtr + 1;
	
	stringstream ssBMax;
	ssBMax << "STRT.FT             " << bottomMax << ".0000: START DEPTH\n";
	las[4] = ssBMax.str();
	stringstream ssSMax;
	ssSMax << "STOP.FT             " << topMax << ".0000: STOP DEPTH\n";
	las[5] = ssSMax.str();
	
	ofstream lasFile(outputFile.c_str());
	for (int i = 0; i < lasLen; i++) {
		
		lasFile << las[i];
	}
	lasFile.close();

	cout << "\nStarting depth " << bottomMax << ".0\n";
	cout << "Ending depth " << topMax << ".0\n";
	cout << "File " << outputFile << " was created successfully.\n\n\n";


	return 0;
}