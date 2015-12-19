#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int num1[1000000], num2[1000000];
int tempArr[1000000], sumArr[1000000];
// array'ler cok buyuk oldugu icin global tanimlarsak daha iyi, main'in hafizasini kullanmamis oluruz


	// ?? If we use main's memmory , does it cost us something ??
	// tam bilmiyorum aslinda sormak lazim. stackover'da benzer bi soru var maile koydum  

// global tanimlayinca butun elemanlar direk sifir olur, array de olsa variable da olsa


	// ?? If we not use it global it will not going to be 0 then ??
	// local variable depends on compiler, but global always initialized as zero
	

int main() 
{
	int i, j, k, nth;
	int lenghtOfNum1=1, lenghtOfNum2=1, lenghtOfSum=1;
	
	// her zaman bir basamakli olur mu emin degiliz aslinda
    
		// ?? Aslinda mecburi tek basamakli olmasi gerekiyor. -> because in question diyor ki (0 <= A,B <= 2) ??
		// Soruyu iyi okumak gerek :)

    // o yuzden int alip basamaklarina ayirsak daha iyi olur, bkz benim kodum
    
	scanf("%d %d %d",&num1[0], &num2[0], &nth);
	

	// nth-2 olmali cunku ilk iki elemani hesapladigimizi varsayiyoruz
    
	for (k=0; k<nth-2; k++) 
	{
		//for (i=0; i<lenghtOfNum2; i++)
		//	tempArr[i] = num2[i];

		for (i=0; i<lenghtOfNum2; i++) 
			for (j=0; j<lenghtOfNum2; j++)
				sumArr[i+j]+= num2[i]*num2[j];
		// sumArr'yi olusturduktan sonra uzunlugunu update et
		lenghtOfSum = i+j-1;	
	
		for (i=0; i<lenghtOfNum1; i++)
			sumArr[i]+= num1[i];

		// temp diye ayri bir array kullaniyorum cunku sumArr[i+1] dedigimiz zaman arrayin orjinalini bozuyoruz
		for (i=0; i<lenghtOfSum; i++) {
			tempArr[i+1]+= sumArr[i]/10;
			tempArr[i] = sumArr[i]%10;
		}
		while (tempArr[lenghtOfSum]/10 != 0)
		{	
			tempArr[lenghtOfSum+1] = tempArr[lenghtOfSum]/10;
			tempArr[lenghtOfSum] = tempArr[lenghtOfSum]%10;
			lenghtOfSum++;
		}
		// for loop'un en sonuncusu (i == lenghtOfSum-1)'da  
		// sumArr[i+1] = sumArr[i]/10 
		// sifir degilse son basamakta(sumArr[lenghtOfSum], i+1==lenghtOfSum)da elde var demektir,
		// yalniz elde 9'dan fazla olabilir, en sonuncu sifir olana kadar elde aktarip,  array uzunlugunu arttiririz

		/*if (sumArr[lenghtOfNum2]/10 != 0) 
		{
			//lenghtOfNum2++;
			sumArr[lenghtOfNum2+1] = sumArr[lenghtOfNum2]/10;
			lenghtOfNum2++;
		}*/
		
		for (i=0; i<lenghtOfSum; i++) {
			num1[i] = num2[i];				// burda kullanmasak da diger buyuk loop'ta kullanacagiz o yuzden
			num2[i] = tempArr[i];				// buyuk loop'tan cikarken sifirliyoruz, her loop'ta bastaki haline donuyor 
			lenghtOfNum1 = lenghtOfNum2;                    // ?? Biz burda sumArr i kullanmmiyoruz ki ? neden sifirladik ?? //
			lenghtOfNum2 = lenghtOfSum;
			//num1[i] = tempArr[i];
			tempArr[i] = sumArr[i] = 0;	// sumArr'i sifirlamayi unutmayalim  
							// cunku her loop'ta yeni sum buluyoruz 
							// burda bir ayrinti vermek istiyorum eger biz sumArr'e her yeni loop'ta
							// atama yapsaydik (sumArr[] = ..) sorun olmazdi ama biz toplama yapiyoruz (sumArr[] += ...)
		}
	}

	for (i=lenghtOfSum-1; i>=0; i--)
		printf ("%d", num2[i]);
	printf ("\n");

	return 0;
}

