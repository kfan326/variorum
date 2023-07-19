#include "Genie.h"
#include <vector>
#include <iostream>


using namespace std;

void print_menu(){
	cout << "please enter one of the following options: \n";
	cout << "(1) Debug\n";
	cout << "(2) Print MSR\n";
	cout << "(3) get vector of df_dm\n";
	cout << "(4) get BitMask\n";
	cout << "(s) print list of supported df_dms\n";
	cout << "(c) clear screen\n";
	cout << "(q) quit\n";
}

void print_msr(GenieDataManager &manager){
	string in = "";
	cout << "To print associated MSRs, please enter the df_dm of the processor (e.g. 06_2AH)\n";
	cin >> in;
	manager.printMSRs(in);
}

void get_df_dm(GenieDataManager &manager){
	string in = "";
	cout << "To print associated df_dms for a MSR, please enter the MSR (e.g. 611H)\n";
	cin >> in;
	auto vec = manager.getDFDMsForMSR(in);
	std::cout << "number of dfdms associated with MSR " <<in << ": " << std::to_string(vec.size()) << "\n";
	for(auto & dfdm : vec) {
		std::cout << dfdm << "\n";
	}
}


void get_bitmask(GenieDataManager &manager) {
	string df_dm = "";
	string msr = "";
	cout << "Please enter the df_dm for the bitmask (e.g. 06_2AH)\n";
	cin >> df_dm;
	cout << "Please enter the MSR for the bitmask (e.g. 17AH)\n";
	cin >> msr;
	auto ret = manager.getMask(df_dm, msr);
	cout << "MSR address: " << setw(18) << ret[0] << setw(18) << "\tMASK: " << ret[1] << "\t Table: " << ret[2] << "\n";
}

int main() {

	GenieDataManager manager;
	string in = "";

	while(1) {
		print_menu();
		cin >> in;
		if(in == "1"){
			manager.debug();
		}
		else if(in == "2"){
			print_msr(manager);
		}
		else if(in == "3"){
			get_df_dm(manager);
		}
		else if(in == "4"){
			get_bitmask(manager);
		}
		else if(in == "s"){
			manager.print_supported_df_dms();
		}
		else if(in == "c" or in == "clear"){
			system("clear");
			continue;
		}
		else if(in == "q" or in == "quit"){
			break;
		} else {
			continue;
		}
	
	}


}
