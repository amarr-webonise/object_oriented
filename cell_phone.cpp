#include<iostream>
#include<string.h>
using namespace std;
 
class cell_phone
{
   public:
      float camera,screen_size;
      string dimensions,cpu,os,color,bluetooth,sim_slot,battery;
	int ram;

};

class android: public cell_phone
{
	public:
	string android_version;
		void set_specialandroiddata()
		{
			os="android";
			sim_slot="dual";
			bluetooth="available";
		}
		

	
};
class nokia6: public android
{ 
	public:
	string brand_name;
	
	void set_nokia6data()
	{
		brand_name="nokia 6.1";
		camera=8;
		dimensions="7.6 x 0.8 x 14.9 cm";
		android_version="8.0.1";
		cpu="snapdragon 434";
		ram=4;
		color="black";
		battery="4000";
		screen_size=5.5;
	}
	void print_nokia6data()
	{
		cout<<"brand name="<<brand_name<<endl;
		cout<<"operating system="<<os<<endl;
		cout<<"camera="<<camera<<"px"<<endl;
		cout<<"sim_slot="<<sim_slot<<endl;
		cout<<"bluetooth="<<bluetooth<<endl;
		cout<<"dimensions="<<dimensions<<endl;
		cout<<"android version="<<android_version<<endl;
		cout<<"CPU="<<cpu<<endl;
		cout<<"RAM="<<ram<<"GB"<<endl;
		cout<<"color="<<color<<endl;
		cout<<"battery="<<battery<<"mAh"<<endl;
		cout<<"Screen size="<<screen_size<<endl;			
					
		
	}
	
};

class samsung_note_9: public android
{ 
	public:
	string brand_name;
	
	void set_samsung_note_9data()
	{
		brand_name="Samsung Galaxy Note 9 ";
		camera=12;
		dimensions="161.90 x 76.40 x 8.80";
		android_version="8.0.1";
		cpu="Samsung Exynos 9810";
		ram=6;
		color="black";
		battery="4000";
		screen_size=6.40;
	}
	void print_samsung_note_9data()
	{
		cout<<"brand name="<<brand_name<<endl;
		cout<<"operating system="<<os<<endl;
		cout<<"camera="<<camera<<"px"<<endl;
		cout<<"sim_slot="<<sim_slot<<endl;
		cout<<"bluetooth="<<bluetooth<<endl;
		cout<<"dimensions="<<dimensions<<endl;
		cout<<"android version="<<android_version<<endl;
		cout<<"CPU="<<cpu<<endl;
		cout<<"RAM="<<ram<<"GB"<<endl;
		cout<<"color="<<color<<endl;
		cout<<"battery="<<battery<<"mAh"<<endl;
		cout<<"Screen size="<<screen_size<<endl;			
					
		
	}
	
};


class iosv:public cell_phone
{
	public:
	string iphone_version;
		void set_specialiosdata()
		{
			os="ios";
			sim_slot="sinlge";
			bluetooth="not available";
		}
};
class iphone6:public iosv
{
	public:
	string brand_name;
	
	void set_iphonedata()
	{
		brand_name="iphone 6";
		camera=8;
		dimensions="7.6 x 0.8 x 14.9 cm";
		iphone_version="8.0.1";
		cpu="snapdragon 434";
		ram=4;
		color="black";
		battery="4000";
		screen_size=5.5;
	}
	void print_iphonedata()
	{
		cout<<"brand name="<<brand_name<<endl;
		cout<<"operating system="<<os<<endl;
		cout<<"camera="<<camera<<"px"<<endl;
		cout<<"sim_slot="<<sim_slot<<endl;
		cout<<"bluetooth="<<bluetooth<<endl;
		cout<<"dimensions="<<dimensions<<endl;
		cout<<"iphone version="<<iphone_version<<endl;
		cout<<"CPU="<<cpu<<endl;
		cout<<"RAM="<<ram<<"GB"<<endl;
		cout<<"color="<<color<<endl;
		cout<<"battery="<<battery<<"mAh"<<endl;
		cout<<"Screen size="<<screen_size<<endl;			
					
		
	}
};






	int main()
	{
		nokia6 n1;
		iphone6 i1;
		samsung_note_9 sn9;
		n1.set_specialandroiddata();
		i1.set_specialiosdata();
    		sn9.set_specialandroiddata();
		int ch;
		cout<<"enter your choice"<<endl<<"1.nokia 6.1"<<endl<<"2.iphone 6"<<endl<<"3.samsung note 9"<<endl;
		cin>>ch;

		
		    switch (ch) 
		    {
			case 1:
			n1.set_nokia6data();
			n1.print_nokia6data();
			break;
			
			case 2:
			i1.set_iphonedata();
			i1.print_iphonedata();
			break;
		
			case 3:
			sn9.set_samsung_note_9data();
			sn9.print_samsung_note_9data();
			break;
		    }
		
		
	}
