#include<iostream>
#include<windows.h>
#include<bits/stdc++.h>
#include<fstream>
#define siz 100
using namespace std;


template<class T>
class Queue
{
	private:
		T *queue;
		int rear,front;
		
		public:
			Queue():rear(-1),front(-1)
			{
				queue=new T[siz];
			}
			
			Queue(int size)
			{
				rear=-1;
				front=-1;
				queue=new T[size];
			}
			
			void Enqueue(T x)
			{
				if(rear>siz)
				{
					cout<<endl<<"Queue is full"<<endl;
				}
				else
				{
				    queue[++rear]=x;
				}
			}
			
			T Dequeue()
			{
				
				if(front==rear)
				{
					cout<<endl<<"Queue is empty"<<endl;
				}
				else
				{
				    return queue[++front];
			        cout<<endl<<"Deleted"<<endl<<endl;
				}
			}
			
			
			
			int size()
			{
				int count;
				for(int i=0;i<=rear;i++)
				{
					if(queue[i]!=0)
					count++;
				}
				
				return count;
			}
			
			int frontz()
			{
				return queue[front];
			}
			
			
			void Remove_negative()
			{
				for(int i=0;i<=rear;i++)
				{
					if(queue[i]<0)
					{
						queue[i]=0;
					}
				}
			}
			
			void reverse()
			{
				int temp;
				for(int i=0;i<=rear/2;i++)
				{
					temp=queue[i];
					queue[i]=queue[rear-i];
					queue[rear-i]=temp;
				}
			}
			
			bool IsEmpty()
			{
				if(rear==front)
				return true;
				
				else
				return false;
			}
			
			void display()
			{
				cout<<"The elements in queue are: "<<endl;
				for(int i=0;i<=rear;i++)
				{
					cout<<queue[i]<<" ";
				}
			}
			
};




void loading()
{
	cout << setw(20) << " " << "\n\n\t\t\t\t Please wait for the process to complete...\n";
	cout << "               \r";
	cout << "\t\t\t     ";
	for(int i=0; i<45; i++)
	{
		cout<<" ";
		Sleep(60);
	}
}



void gotoxy(int x, int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void delay (unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


void printLineSlowly(char l,int k,int t)
{
	for(int i=0;i<k;i++)
	{
		delay(t);
		cout<<l;
	}
}

void printStringSlowly(string s, int t)
{
	int len = s.length();
	for(int i=0;i<len;i++){
		delay(t);
		cout<<s[i];
	}
}

class SickleCell
{
	public:
		void EffectOnPatient()
		{
			gotoxy(35,0);
			cout<<"-----SICKLE CELL DISEASE DETECTED-----"<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"EFFECTS ON PATIENT:-"<<endl<<endl;
			cout<<"-> SECONDARY BONE FORMATION CAUSES PROMINENT CHEEK BONES (CREWCUT APPERANCE ON X-RAY STUDIES)"<<endl;
			cout<<"-> SPLEENOMEGALY ( ENLARGED SPLEEN)"<<endl;
			cout<<"-> CRISES i.e SEVERE PAIN DUE OCCLUSION OF VESSELS "<<endl;
			cout<<"-> PULMONARY DYSFUNCTION ESPECIALLY IN CHILDREN "<<endl;
			cout<<"-> IN BLOOD CULTURES MANY SICKLE SHAPED CELLS CAN BE SEEN" <<endl;
		}
		
		
		void EffectOnFutureGeneration()
		{
			gotoxy(35,0);
			cout<<"-----SICKLE CELL DISEASE DETECTED-----"<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"EFFECTS ON FUTURE GENERATION:-"<<endl<<endl;
			cout<<"-> IF ANY OF THE PARENTS HAS THIS DISEASE,IT WILL BE TRANSFERRED TO NEXT GENERATION WITH RATIO OF 3:1 \ni.e 1 OUT 3 OFFSPRINGS WOULD OF AFFECTED"<<endl;
		}
};



class AcuteMyeloidLeukemia
{
	public:
		void EffectOnPatient()
		{
			gotoxy(35,0);
			cout<<"-----ACUTE MYELOID LEUKEMIA DISEASE DETECTED-----"<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"ACUTE MYELOID LEUKEMIA IS A TUMOR OF PROGENITOR HEMATOPOETIC CELLS\n(CELLS WHICH GIVE RISE TO DIFFERENT BLOOD CELLS) DUE TO ACQIUIRED MUTATIONS"<<endl<<endl<<endl;
			cout<<"EFFECTS ON PATIENT:-"<<endl<<endl;
			cout<<"-> FATIGUE"<<endl;
			cout<<"-> FEVER"<<endl;
			cout<<"-> CUTANEOUS AND GINGIVAL BLEEDING ( BEELDING IN GUMS)"<<endl;
			cout<<"-> FREQUENT INFECTIONS BY FUNGI AND BACTERIA"<<endl;
			cout<<"-> PETECHIAE AND ECHYMOSES ( SMALL PATHCHES OF BLOOD/BRUISES)"<<endl;
		}
		
			void EffectOnFutureGeneration()
		{
			gotoxy(35,0);
			cout<<"-----ACUTE MYELOID LEUKEMIA DISEASE DETECTED-----"<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"EFFECTS ON FUTURE GENERATION:-"<<endl<<endl;
			cout<<"-> IF ANY OF THE PARENTS HAS THIS DISEASE,IT WILL BE TRANSFERRED TO NEXT GENERATION WITH RATIO OF 3:1 \ni.e 1 OUT 3 OFFSPRINGS WOULD OF AFFECTED"<<endl;
		}
};


class Haemophilia
{
	public:
		void EffectOnPatient()
		{
			gotoxy(35,0);
			cout<<"-----HAEMOPHILIA DISEASE DETECTED-----"<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"IN THIS BLOOD DISORDER, LIFE-THREATENING OR LETHAL BLEEDING IS CAUSED DUE TO MUTATION IN CLOTTING FACTORS,\nWHICH IN NORMAL PEOPLE CAUSES THE INITIATION OF CLOTTING CASCADE TO STOP BLEEDING"<<endl<<endl;
			cout<<"EFFECTS ON PATIENT:-"<<endl<<endl;
			cout<<"-> TENDANCY TOWARDS EASY BRUISING"<<endl;
			cout<<"-> MASSIVE HAEMORRHAGE (LOSS OF BLOOD) AFTER OPERATIONS"<<endl;
			cout<<"-> SPONTANEOUS HEMORRHAGES ARE SEEN IN PLACES MOST SUSCEPTIBLE TO TRAUMA"<<endl;
			cout<<"-> HAEMARTHROSES i.e BLEEDING IN JOINTS, CAN LEAD TO CRIPPLING CONDITIONS"<<endl;
		}
		
		void EffectOnFutureGeneration()
		{
			gotoxy(35,0);
			cout<<"-----HAEMOPHILIA DISEASE DETECTED-----"<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"EFFECTS ON FUTURE GENERATION:-"<<endl<<endl;
			cout<<"-> HEMOPHILIA IS AN  'X-LINKED RECESSIVE INHERITED DISORDER\nWHICH MEANS THAT AN AFFECTED FATHER PASSES THIS DISEASE TO HIS DAUGHTER\nWHILE AN AFFECTED MOTHER PASSES THIS DISEASE TO HER SONS"<<endl;
		}
};



class Thalassemia
{
	public:
		void EffectOnPatient()
		{
			gotoxy(35,0);
			cout<<"-----THALASSEMIA DISEASE DETECTED-----"<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"EFFECTS ON PATIENT:-"<<endl<<endl;
			cout<<"-> HEMOSIDEROSIS ( IRON OVERLOAD)"<<endl;
			cout<<"-> SECONDARY HEMOCHROMATOSIS(ACCUMULATION OF HEMOCHROMATIN IN LIVER)"<<endl;
			cout<<"-> HEPTOMEGALY AND SPLEENOMEGALY"<<endl;
			cout<<"-> CREWCUT APPERANCE OF SKULL BONES"<<endl;
			cout<<"-> BONY PROMINENCES ARE ENLARGED"<<endl;
		}
		
		
		void EffectOnFutureGeneration()
		{
			gotoxy(35,0);
			cout<<"-----THALASSEMIA DISEASE DETECTED-----"<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"EFFECTS ON FUTURE GENERATION:-"<<endl<<endl;
			cout<<"-> If one choromosome of Mother is defected then atleast TWO Children would be effected by Thalassemia(MILD)."<<endl;
			cout<<"-> One Chromosome of Mother and Father is defected then ONE Children would be completely Effected\n   And other TWO will be MILD effected by Thalassemia."<<endl<<endl;
		}
		
};




class ElectroTest
{
	private:
		int disease;
		
		public: 
			ElectroTest():disease(0){}
			
			int Disease_test(float hbs , float hba2, float hbf, float WBC, float APTT, float PT, float fibrinogen, float platelet, int blast_count)
			{
				
				if(hbs>=40)
				disease=1;                             // 1 for sickle
				
				
				if(hba2>4 && hbf>2)
				disease=2;                            // 2 for thalassemia   
				
				
				else if(WBC>16)
				{
					if(blast_count<20)
					disease=3;                            // 3 for acute myeloid leukemia
				}
				
				else if(platelet<145 && APTT>33  && PT>15  && fibrinogen< 150)
				{
					disease=4;                           // 4 for Halmophilia
				}
					
				return disease;
			}
	
};



class Disease
{
	private:
		float haemoglobin, MCV, MCH, MCHC, RBC, platelet, WBC, HBS, HBA2, HBF, APTT, PT, fibrinogen, blast_count;
		int disease;
		
		public:
			Disease(): haemoglobin(0), MCV(0), MCH(0), MCHC(0), RBC(0), platelet(0), WBC(0), HBS(0), HBA2(0), HBF(0), APTT(0), PT(0), fibrinogen(0), blast_count(0){
			}
			
			void setData1(float x1, float x2, float x3, float x4, float x5, float x6, float x7)
			{
				haemoglobin=x1;
				MCV=x2;
				MCH=x3;
				MCHC=x4;
				RBC=x5;
				platelet=x6;
				WBC=x7;
			}
			
			
			void setData2(float x8, float x9, float x10, float x11, float x12, float x13, float x14)
			{
			
				HBS=x8;
				HBA2=x9;
				HBF=x10;
				APTT=x11;
				PT=x12;
				fibrinogen=x13;
				blast_count=x14;
			}
			
			
			int checkAnemia(float haemoglobin, float RBC)
			{
				if(haemoglobin<11 && RBC< 3.9)
	            {
		            return 1; 
				}
				
				else
				return 0;
			}
			
			
			

			int Electrotest(float hbs , float hba2, float hbf, float WBC, float APTT, float PT, float fibrinogen, float platelet, int blast_count)
			{
				
				if(hbs>=40)
				disease=1;                             // 1 for sickle
				
				
				if(hba2>4 && hbf>2)
				disease=2;                            // 2 for thalassemia   
				
				
				else if(WBC>16)
				{
					if(blast_count<20)
					disease=3;                            // 3 for acute myeloid leukemia
				}
				
				else if(platelet<145 && APTT>33  && PT>15  && fibrinogen< 150)
				{
					disease=4;                           // 4 for Halmophilia
				}
					
				return disease;
			}
			
			float getHaemoglobin()
			{
				return haemoglobin;
			}
			
			float getmcv()
			{
				return MCV;
			}
			
			float getmch()
			{
				return MCH;
			}
			
			float getmchc()
			{
				return MCHC;
			}
			
			float getrbc()
			{
				return RBC;
			}
			
			float getplatelet()
			{
				return platelet;
			}
			
			float getwbc()
			{
				return WBC;
			}
			
			float gethbs()
			{
				return HBS;
			}
			
			float gethba2()
			{
				return HBA2;
			}
			
			float gethbf()
			{
				return HBF;
			}
			
			float getaptt()
			{
				return APTT;
			}
			
			float getpt()
			{
				return PT;
			}
			
			float getfibrinogen()
			{
				return fibrinogen;
			}
			
			float getBlastCount()
			{
				return blast_count;
			}
			
			
};



int main()
{
	float haemoglobin, haematocrit, MCV, MCH, MCHC, RBC, platelet, WBC, neutrophlis, lymphocytes, eosinophils, monocytes, basophils, ESR, HBS, HBA2, HBF, APTT, PT, fibrinogen, blast_count;
	bool anemia=false;
	int disease, choice1, choice2, choice3;
	ifstream out1, out2;
	Disease D1;
	Queue<Disease> q;
	int i=1;
	
	out1.open("ProjectInput1.txt",ios::out);
	out2.open("ProjectInput2.txt");
	
	system("COLOR 70");
	
	gotoxy(40,13);
	printLineSlowly('-',25,5);
	gotoxy(40,12); 
	printStringSlowly(" BLOOD DISEASES DETECTOR ", 100);
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	system("pause");
	system("cls");
	
	
	cout<<"Choose anyone that you prefer: \n1. User Input\n2. From file\n\nchoice: ";
	cin>>choice1;
	
	if(choice1==1)
	{
		do
		{
			cout<<"Enter the data for patient "<<i<<endl;
			
			cout<<"Enter Haemoglobin: ";
			cin>>haemoglobin;
			
			cout<<"Enter Haematocrit: ";
			cin>>haematocrit;
			
			cout<<"Enter MCV: ";
			cin>>MCV;
			
			cout<<"Enter MCH: ";
			cin>>MCH;
			
			cout<<"Enter MCHC: ";
			cin>>MCHC;
			
			cout<<"Enter RBC: ";
			cin>>RBC;
			
			cout<<"Enter Platelet: ";
			cin>>platelet;
			
			cout<<"Enter WBC: ";
			cin>>WBC;
			
			cout<<"Do you want to continue or not?\n1. Yes\n2.No\n\nchoice: ";
			cin>>choice2;
			cout<<endl<<endl;
			
			D1.setData1(haemoglobin, MCV, MCH, MCHC, RBC,platelet,WBC);
	        q.Enqueue(D1);
	        i++;
			
		}while(choice2!=2);
	}
	
	
	
	else
	{
		
	while(!out1.eof())
	{
	out1>>haemoglobin;
	out1>>haematocrit;
	out1>>MCV;
	out1>>MCH;
	out1>>MCHC;
	out1>>RBC;
	out1>>platelet;
	out1>>WBC;
	
	D1.setData1(haemoglobin, MCV, MCH, MCHC, RBC,platelet,WBC);
	q.Enqueue(D1);
    }
    
	out1.close();
    }
    
    system("pause");
    system("cls");
	

	i=1;
	
	while(!q.IsEmpty())
	{
	
	loading();	
	system("cls");
	
	D1=q.Dequeue();
	
	cout<<" *********Complete Blood Count(CBC) Report*********"<<endl<<endl;
	cout<<"Report of patient "<<i<<endl<<endl<<endl;
	cout<<" TEST NAME              RESULT              NORMAL RANGE"<<endl<<endl;
	cout<<" Haemoglobin"<<"\t\t"<<D1.getHaemoglobin()<<"\t\t"<<"    12.0 - 15.0"<<endl;
	cout<<" RBC"<<"\t\t\t"<<D1.getrbc()<<"\t\t"<<"    3.9 - 5.6"<<endl;
	cout<<" M.C.V"<<"\t\t\t"<<D1.getmcv()<<"\t\t"<<"     76 - 100"<<endl;
	cout<<" M.C.H"<<"\t\t\t"<<D1.getmch()<<"\t\t"<<"     27 - 32"<<endl;
	cout<<" WBC"<<"\t\t\t"<<D1.getwbc()<<"\t\t"<<"    4.0 - 11.0"<<endl;
	cout<<" Platelet Counts"<<"\t"<<D1.getplatelet()<<"\t\t"<<"    150 - 450"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	
	
	system("pause");
	system("cls");
	
	
	
	choice3=D1.checkAnemia(D1.getHaemoglobin(), D1.getrbc());
	
	if(choice3==1)
	{
		anemia=true;
	}
	
	else
	anemia=false;
	
	
 	if(anemia==true)
	{
		
		if(choice1==1)
		{
			cout<<"Enter data for patient "<<i<<" for detecting the disease"<<endl;
			cout<<"Enter HBS: ";
			cin>>HBS;
			
			cout<<"Enter HBA2: ";
			cin>>HBA2;
			
			cout<<"Enter HBF: ";
			cin>>HBF;
			
			cout<<"Enter APTT: ";
			cin>>APTT;
			
			cout<<"Enter PT: ";
			cin>>PT;
			
			cout<<"Enter fibrinogen: ";
			cin>>fibrinogen;
			
			cout<<"Enter blast count: ";
			cin>>blast_count;
			
			system("pause");
			system("cls");
		}
		
		else
		{
		   out2>>HBS;
	       out2>>HBA2;
	       out2>>HBF;
	       out2>>APTT;
	       out2>>PT;
	       out2>>fibrinogen;
	       out2>>blast_count;
		}
	    
	
		
		D1.setData2(HBS, HBA2, HBF, APTT, PT, fibrinogen, blast_count);
		
		disease=D1.Electrotest(D1.gethbs(), D1.gethba2(), D1.gethbf(),D1.getwbc(), D1.getaptt(), D1.getpt(), D1.getfibrinogen(), D1.getplatelet(), D1.getBlastCount());
		
	
	if(disease==1)
	{
		SickleCell SI;
		
	loading();	
	system("cls");
	
	gotoxy(35,0);
	cout<<"-----SICKLE CELL DISEASE DETECTED-----"<<endl<<endl<<endl<<endl;
			
	cout<<" *********Sickel Cell Disease Report*********"<<endl<<endl;
	cout<<" TEST NAME              RESULT              NORMAL RANGE"<<endl<<endl;
	cout<<" Haemoglobin"<<"\t\t"<<D1.getHaemoglobin()<<"\t\t"<<"    12.0 - 15.0"<<endl;
	cout<<" RBC"<<"\t\t\t"<<D1.getrbc()<<"\t\t"<<"    3.9 - 5.6"<<endl;
	cout<<" HBS"<<"\t\t\t"<<D1.gethbs()<<"\t\t"<<"    35 - 39"<<endl;
	cout<<" M.C.V"<<"\t\t\t"<<D1.getmcv()<<"\t\t"<<"    76 - 100"<<endl;
	cout<<" M.C.H"<<"\t\t\t"<<D1.getmch()<<"\t\t"<<"    27 - 32"<<endl;
	cout<<" WBC"<<"\t\t\t"<<D1.getwbc()<<"\t\t"<<"    4.0 - 11.0"<<endl;
	cout<<" Platelet Counts"<<"\t"<<D1.getplatelet()<<"\t\t"<<"    150 - 450"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	system("pause");
	system("cls");
		
		SI.EffectOnPatient();
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		system("pause");
		system("cls");
		SI.EffectOnFutureGeneration();
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		system("pause");
		system("cls");
	}
	
	else if(disease==2)
	{
		Thalassemia TH;
		
		loading();	
	system("cls");
	
	gotoxy(35,0);
	cout<<"-----THALASSEMIA DISEASE DETECTED-----"<<endl<<endl<<endl<<endl;
			
	cout<<" *********Thalassemia Disease Report*********"<<endl<<endl;
	cout<<" TEST NAME              RESULT              NORMAL RANGE"<<endl<<endl;
	cout<<" Haemoglobin(HbA1)"<<"\t"<<D1.getHaemoglobin()<<"\t\t"<<"    95 - 98"<<endl;
	cout<<" Haemoglobin(HbA2)"<<"\t"<<D1.gethba2()<<"\t\t"<<"    1.5 - 3.5"<<endl;
	cout<<" Haemoglobin(HbF)"<<"\t"<<D1.gethbf()<<"\t\t"<<"    Less than 2"<<endl;
	cout<<" RBC"<<"\t\t\t"<<D1.getrbc()<<"\t\t"<<"    3.9 - 5.6"<<endl;
	cout<<" M.C.V"<<"\t\t\t"<<D1.getmcv()<<"\t\t"<<"    76 - 100"<<endl;
	cout<<" M.C.H"<<"\t\t\t"<<D1.getmch()<<"\t\t"<<"    27 - 32"<<endl;
	cout<<" WBC"<<"\t\t\t"<<D1.getwbc()<<"\t\t"<<"    4.0 - 11.0"<<endl;
	cout<<" Platelet Counts"<<"\t"<<D1.getplatelet()<<"\t\t"<<"    150 - 450"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	system("pause");
	system("cls");
		
		
		
		TH.EffectOnPatient();
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		system("pause");
		system("cls");
		TH.EffectOnFutureGeneration();
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		system("pause");
		system("cls");

		
	}
	
	else if(disease==3)
	{
        
        loading();	
	    system("cls");
	
	
	    gotoxy(35,0);
	    cout<<"-----ACUTE MYELOID LEUKEMIA DISEASE DETECTED-----"<<endl<<endl<<endl<<endl;
        cout<<" *********Acute Myeloid Leukemia Report*********"<<endl<<endl;
	    cout<<" TEST NAME              RESULT              NORMAL RANGE"<<endl<<endl;
	    cout<<" Haemoglobin"<<"\t\t"<<D1.getHaemoglobin()<<"\t\t"<<"    12.0 - 15.0"<<endl;
	    cout<<" RBC"<<"\t\t\t"<<D1.getrbc()<<"\t\t"<<"    3.9 - 5.6"<<endl;
	    cout<<" M.C.V"<<"\t\t\t"<<D1.getmcv()<<"\t\t"<<"    76 - 100"<<endl;
	    cout<<" M.C.H"<<"\t\t\t"<<D1.getmch()<<"\t\t"<<"    27 - 32"<<endl;
	    cout<<" WBC"<<"\t\t\t"<<D1.getwbc()<<"\t\t"<<"    4.0 - 11.0"<<endl;
	    cout<<" Platelet Counts"<<"\t"<<D1.getplatelet()<<"\t\t"<<"    150 - 450"<<endl;
	    cout<<" Blast Counts"<<"\t\t"<<D1.getBlastCount()<<"\t\t"<<"    less than 5"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	    system("pause");
	    system("cls");
        
        
		AcuteMyeloidLeukemia AML;
		AML.EffectOnPatient();
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		system("pause");
		system("cls");
		AML.EffectOnFutureGeneration();
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		system("pause");
		system("cls");
	}
	
	else if(disease==4)
	{
        loading();	
	    system("cls");
	
	    gotoxy(35,0);
	    cout<<"-----HAEMOGLOBIN DISEASE DETECTED-----"<<endl<<endl<<endl<<endl;
        cout<<" *********Haemoglobin Report*********"<<endl<<endl;
	    cout<<" TEST NAME              RESULT              NORMAL RANGE"<<endl<<endl;
	    cout<<" Haemoglobin"<<"\t\t"<<D1.getHaemoglobin()<<"\t\t"<<"    12.0 - 15.0"<<endl;
	    cout<<" RBC"<<"\t\t\t"<<D1.getrbc()<<"\t\t"<<"    3.9 - 5.6"<<endl;
	    cout<<" M.C.V"<<"\t\t\t"<<D1.getmcv()<<"\t\t"<<"    76 - 100"<<endl;
	    cout<<" M.C.H"<<"\t\t\t"<<D1.getmch()<<"\t\t"<<"    27 - 32"<<endl;
	    cout<<" WBC"<<"\t\t\t"<<D1.getwbc()<<"\t\t"<<"    4.0 - 11.0"<<endl;
	    cout<<" Platelet Counts"<<"\t"<<D1.getplatelet()<<"\t\t"<<"    150 - 450"<<endl;
	    cout<<" APTT"<<"\t\t\t"<<D1.getaptt()<<"\t\t"<<"     25 - 32"<<endl;
        cout<<" PT"<<"\t\t\t"<<D1.getpt()<<"\t\t"<<"     12 - 14"<<endl;
        cout<<" Fibrinogen"<<"\t\t"<<D1.getfibrinogen()<<"\t\t"<<"    150 - 400"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        system("pause");
		system("cls");
        
        
		Haemophilia HAE;
		HAE.EffectOnPatient();
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		system("pause");
		system("cls");
		HAE.EffectOnFutureGeneration(); 
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		system("pause");
		system("cls");
	}
	
	
	else
	cout<<"Blood disease is not from these four diseases"<<endl;

}
    
	else
	cout<<"Blood disease not detected for patient "<<i<<endl;
	
	i++; 
    
}
out2.close();

}
