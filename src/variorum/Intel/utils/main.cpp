#include "Genie.h"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

vector<string> df_dm_list{
		"06_2AH",
		"06_2DH",
		"06_3AH",
		"06_3CH",
		"06_3DH",
		"06_3EH",
		"06_3FH",
		"06_45H",
		"06_46H",
		"06_47H",
		"06_4EH",
		"06_4FH",
		"06_55H",
		"06_56H",
		"06_5EH",
		"06_66H",
		"06_6AH",
		"06_6CH",
		"06_7DH",
		"06_7EH",
		"06_8CH",
		"06_8DH",
		"06_8EH",
		"06_8FH",
		"06_97H",
		"06_9AH",
		"06_9EH",
		"06_A5H",
		"06_A6H",
		"06_BFH"
};



int main() {

	//initialize data manager
	GenieDataManager manager;

	//debug outputs everything inside the datastore
	manager.debug();

	std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	//print MSRs for df_dm 06_2AH
	manager.printMSRs("06_2AH");
	std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	
	//function call to get df_dms for MSR 611H
	auto vec = manager.getDFDMsForMSR("611H");
	std::cout << "number of dfdms associated with MSR 611H: " << std::to_string(vec.size()) << "\n";
	for(auto & dfdm : vec) {
		std::cout << dfdm << "\n";
	}
	std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	
	//function call to get MSRs for df_dm 06_55H
	auto ret = manager.getMSRsForDFDM("06_55H");
	for(const auto & row : ret) {
		std::cout << "Hex address: " << setw(12) << row[0] << "\tMSR name: " << row[1] << "\tDomain: " << row[2] << "\tDescription: " << row[3] << "\tTable: " <<row[4] << "\n";
	}
	std::cout << "number of entries for 06_8FH: " << ret.size() << "\n";
	std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------\n";

	

	/*
	auto ret = manager.getMask("06_2AH", "17AH");

	cout << "MSR address: " << setw(18) << ret[0] << setw(18) << "\tMASK: " << ret[1] << "\t Table: " << ret[2] << "\n";
	*/
	

	/*
	for(auto df_dm : df_dm_list){
		ofstream output;
		string filepath = "safelist/" + df_dm + ".txt";
		output.open(filepath);
		
		auto msrs = manager.getMSRsForDFDM(df_dm);

		for(auto & row : msrs) {
			cout << df_dm << "\t" << row[0] << " Row size: " << row.size() << "\n";
			auto mask = manager.getMask(df_dm, row[0]);
			if(mask[1] == "") continue;
			output << "MSR address: " << setw(18) << mask[0] << "\tMASK: " << setw(18) << mask[1] << "\t Table: " << mask[2] << "\n";
		}

		output.close();

	}
	*/
		
}
