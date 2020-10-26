void sortByFatalities(vector<FireInfo>&);
void sortByInjuries(vector<FireInfo>&);
void sortByDamaged(vector<FireInfo>&);
void sortByDestroyed(vector<FireInfo>&);
void printVector(const vector<FireInfo>&);

void sortByFatalities(vector<FireInfo>& fires){
	
	vector<FireInfo> tempFires;
	for(unsigned int i = 0; i<fires.size(); i++){
		if(fires.at(i).fatalities == 0){
			tempFires.push_back(fires.at(i));
		}else if(fires.at(i).fatalities >= tempFires.at(0).fatalities){
			tempFires.insert(tempFires.begin(), fires.at(i));
		}else{
			int u = 1;
			while(fires.at(i).fatalities < tempFires.at(u).fatalities){
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
		if(fires.at(i).injuries == 0){
			tempFires.push_back(fires.at(i));
		}else if(fires.at(i).injuries >= tempFires.at(0).injuries){
			tempFires.insert(tempFires.begin(), fires.at(i));
		}else{
			int u = 1;
			while(fires.at(i).injuries < tempFires.at(u).injuries){
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
		if(fires.at(i).structDamaged == 0){
			tempFires.push_back(fires.at(i));
		}else if(fires.at(i).structDamaged >= tempFires.at(0).structDamaged){
			tempFires.insert(tempFires.begin(), fires.at(i));
		}else{
			int u = 1;
			while(fires.at(i).structDamaged < tempFires.at(u).structDamaged){
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
		if(fires.at(i).structDestroyed == 0){
			tempFires.push_back(fires.at(i));
		}else if(fires.at(i).structDestroyed >= tempFires.at(0).structDestroyed){
			tempFires.insert(tempFires.begin(), fires.at(i));
		}else{
			int u = 1;
			while(fires.at(i).structDestroyed < tempFires.at(u).structDestroyed){
				u++;
			}
			tempFires.insert(tempFires.begin()+u, fires.at(i));
		}
	}
	printVector(tempFires);
}



void printVector(const vector<FireInfo>& tempFires){

	for(unsigned int i =0; i < tempFires.size(); i++){
		cout<<tempFires.at(i).acresBurned <<"\t\t";
		cout<<tempFires.at(i).year <<"\t\t";
		//cout<<tempFires.at(i).county <<"\t";
		cout<<tempFires.at(i).fatalities <<"\t\t";
		cout<<tempFires.at(i).injuries <<"\t\t";
		cout<<tempFires.at(i).structDamaged <<"\t\t";
		cout<<tempFires.at(i).structDestroyed <<"\t\t";
		cout<<tempFires.at(i).name << endl;
	}
	cout << endl << endl;
}