//
 
 #include<iostream>
 #include<string>
 using namespace std;
 string sayhello(string name, int mark, char grade) 
      {
      	  return "\nyour name is " + name ;
      	  return "\nyour marks are " + mark;
      	  return"\nyour grade is " + grade;
      }
    int main()
       {
       	 string massage =sayhello("iron man ", 45 ,'A');
       	 cout<<"this is your massage " << massage <<endl;
       	 cout<<massage<<endl;
		 cout<<massage<<endl;
       	  return 0;
	   }
