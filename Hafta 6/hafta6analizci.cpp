/*
	Hafta 6 analizci
	guessing game 3 chances the number is in range 1-9
	if you fail game is over
	
	since no feedback it is fully random a guess
	(binary search would be good here)
		
	i coulnt help myself and added some fun to the code 
		
		
		
	*** of course it is not all considered like what will happen if range is bigger than INT_MAX
	but you get the point it is fun ***
	
*/

#include <bits/stdc++.h>
using namespace std;

int guesses,mn,mx;
int number,guess;

int main(){
	srand(time(NULL));
	cout<<"What is the range of the number:";
	cin>>mn>>mx;
	if(mn>mx) swap(mn,mx); //pls no
	else if(mx==mn){
		cout<<"I guess your number is "<<mn;
		cout<<"\nBecause of course it is!!";
		return 0;
	}
	cout<<"How many guesses i have?\n";
	cin>>guesses;
	if(guesses<1){
		cout<<"I will pretend i did not see that!\n";
		cout<<"And i will try to guess in 1.\n";
		guesses=1;
	}
	GETNUMBER:
	cout<<"What is your number?\n";
	cin>>number;	
	if(number<mn or number>mx)   //you little cheater :)
		goto GETNUMBER;
	
	for(int i=0;i<guesses;i++){
		int g=rand()%(mx-mn)+mn;
		if(g==number){
			cout<<"Guess "<<i+1<<" is "<<g<<" and it is true!";
			return 0;
		}
		else{
			cout<<"Guess "<<i+1<<" is "<<g<<" and it is false\n";
		}
	}
	cout<<"Game over!!";
	return 0;
}
