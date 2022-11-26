#include <iostream>
#include <vector>
#include <math.h>
double mean(std::vector<int> vec)
{
	
	int toplam=0;
	int sayi;
	int len=vec.size();
	for ( int i=0;i<len;i++)
	{
		
		sayi=vec[i];
		
		toplam=toplam+sayi;
	
	}
	
	return (double) toplam/len;
	
	
	
	
	
}

double stddev(std::vector<int> vec)
{
	
	double avg= mean(vec);
	int sayi;
	double toplam=0;
	
	int len=vec.size();
	
	for ( int i=0;i<len;i++)
	{
		
		sayi=vec[i];
		
		
		 toplam+=pow(avg-sayi,2);
	
	}
	
	
	
	
	
	
	return pow(toplam/len,(0.5));
	
	
	
	
	
}




int main()
{
	std::vector<int> my_vector; 
	my_vector.push_back(5);
	my_vector.push_back(6);
	my_vector.push_back(7);
	my_vector.push_back(8);
	my_vector.push_back(5);
	my_vector.push_back(6);
	
	
	
	std::cout<<mean(my_vector)<<std::endl;
	std::cout<<stddev(my_vector)<<std::endl;
	
	
	
	
	
	return 0;
}
