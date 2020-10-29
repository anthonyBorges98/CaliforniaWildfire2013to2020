#include "FireInfo.h"
void sortByFatalities(vector<FireInfo>&);
void sortByInjuries(vector<FireInfo>&);
void sortByDamaged(vector<FireInfo>&);
void sortByDestroyed(vector<FireInfo>&);
void printVector(const vector<FireInfo>&);

void sortByFatalities(vector<FireInfo>& fires){
	
	vector<FireInfo> tempFires;
	for(unsigned int i = 0; i<fires.size(); i++){
		if(fires.at(i).getFatalities() == 0){
			tempFires.push_back(fires.at(i));
		}else if(fires.at(i).getFatalities() >= tempFires.at(0).getFatalities()){
			tempFires.insert(tempFires.begin(), fires.at(i));
		}else{
			int u = 1;
			while(fires.at(i).getFatalities() < tempFires.at(u).getFatalities()){
				u++;
			}
			tempFires.insert(tempFires.begin()+u, fires.at(i));
		}
	}
	printVector(tempFires);
}

void sortByInjuries(vector<FireInfo>&fires){

	vector<FireInfo> tempFires;
	for(unsigned int i = 0; i<fires.size(); i++){
		if(fires.at(i).getInjuries() == 0){
			tempFires.push_back(fires.at(i));
		}else if(fires.at(i).getInjuries() >= tempFires.at(0).getInjuries()){
			tempFires.insert(tempFires.begin(), fires.at(i));
		}else{
			int u = 1;
			while(fires.at(i).getInjuries() < tempFires.at(u).getInjuries()){
				u++;
			}
			tempFires.insert(tempFires.begin()+u, fires.at(i));
		}
	}
	printVector(tempFires);
}

void sortByDamaged(vector<FireInfo>&fires){

	vector<FireInfo> tempFires;
	for(unsigned int i = 0; i<fires.size(); i++){
		if(fires.at(i).getStructDamaged() == 0){
			tempFires.push_back(fires.at(i));
		}else if(fires.at(i).getStructDamaged() >= tempFires.at(0).getStructDamaged()){
			tempFires.insert(tempFires.begin(), fires.at(i));
		}else{
			int u = 1;
			while(fires.at(i).getStructDamaged() < tempFires.at(u).getStructDamaged()){
				u++;
			}
			tempFires.insert(tempFires.begin()+u, fires.at(i));
		}
	}
	printVector(tempFires);
}

void sortByDestroyed(vector<FireInfo>&fires){

	vector<FireInfo> tempFires;
	for(unsigned int i = 0; i<fires.size(); i++){
		if(fires.at(i).getStructDestroyed() == 0){
			tempFires.push_back(fires.at(i));
		}else if(fires.at(i).getStructDestroyed() >= tempFires.at(0).getStructDestroyed()){
			tempFires.insert(tempFires.begin(), fires.at(i));
		}else{
			int u = 1;
			while(fires.at(i).getStructDestroyed() < tempFires.at(u).getStructDestroyed()){
				u++;
			}
			tempFires.insert(tempFires.begin()+u, fires.at(i));
		}
	}
	printVector(tempFires);
}



void printVector(const vector<FireInfo>& tempFires){

	for(unsigned int i =0; i < tempFires.size(); i++){
		cout<<tempFires.at(i).getAcresBurned() <<"\t\t";
		cout<<tempFires.at(i).getYear() <<"\t\t";
		cout<<tempFires.at(i).getCounty() <<"\t";
		cout<<tempFires.at(i).getFatalities() <<"\t\t";
		cout<<tempFires.at(i).getInjuries() <<"\t\t";
		cout<<tempFires.at(i).getStructDamaged() <<"\t\t";
		cout<<tempFires.at(i).getStructDestroyed() <<"\t\t";
		cout<<tempFires.at(i).getName() << endl;
	}
	cout << endl << endl;
}