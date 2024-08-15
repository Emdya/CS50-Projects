#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    //Variables
long int cardNum = 0;
long int newNum = 0;
long int newNum2 = 0;
double totalDigit = 0.0;
long int digit2 = 0;
long int digit = 0;
long int yDigit = 0;
long int xDigit = 0;
long int mDigit = 0;
double storage = 0.0;
double storage2 = 0.0;
int totalStorage = 0;
bool americanExpress = false;
bool visa = false;
bool mastercard = false;
bool isValid = false;
bool is13Digits = false;
bool is15Digits = false;
bool is16Digits = false;

//Functions


//Code
//American Express is 15 digits. 375687958473214 , 346578654329145
do{
cardNum = get_long("Enter your credit card number: ");
if(cardNum < pow(10,15) && cardNum >= pow(10,13)){
    if (cardNum/pow(10,13) >= 37 && cardNum/pow(10,13) <=38)
    {
        americanExpress = true;
        printf("AMEX\n");
        isValid = true;
    }
    if (cardNum/pow(10,13) >= 34 && cardNum/pow(10,13) <= 35){
         americanExpress = true;
         printf("AMEX\n");
         isValid = true;
}
is15Digits = true;
}
//Mastercard & Visa can both have 16 digits.
// Mastercard testing: 5123456765438976, 5223456765438976, 5323456765438976, 5423456765438976, 5523456765438976
else if(cardNum < pow(10,16) && cardNum >= pow(10,15))
{
    if(cardNum/pow(10,15) >= 4 && cardNum/pow(10,15) <= 5){
        visa = true;
        printf("VISA\n");
        isValid = true;
    }
    if(cardNum/pow(10,14) >= 51 && cardNum/pow(10,14) < 52){
        mastercard = true;
        printf("MASTERCARD\n");
        isValid = true;
    }
    if(cardNum/pow(10,14) >= 52 && cardNum/pow(10,14) < 53){
        mastercard = true;
        printf("MASTERCARD\n");
        isValid = true;
    }
    if(cardNum/pow(10,14) >= 53 && cardNum/pow(10,14) < 54){
        mastercard = true;
        printf("MASTERCARD\n");
        isValid = true;
    }
    if(cardNum/pow(10,14) >= 54 && cardNum/pow(10,14) < 55){
        mastercard = true;
        printf("MASTERCARD\n");
        isValid = true;
    }
    if (cardNum/pow(10,14) >= 55 && cardNum/pow(10,14) < 56){
        mastercard = true;
        printf("MASTERCARD\n");
        isValid = true;
    }
    is16Digits = true;
}
else if(cardNum < pow(10,13) && cardNum >= pow(10,12)){
    if(cardNum/pow(10,12) >= 4 && cardNum/pow(10,12) < 5){
        visa = true;
        printf("VISA\n");
        isValid = true;
    }
    is13Digits = true;
}
else {
    isValid = false;
    printf("INVALID\n ");
}
}
while(isValid == false);

    newNum = cardNum/10;
    digit = newNum % 10;
    mDigit = digit * 2;
    if (mDigit > 9){
        while (mDigit >= 10){
            xDigit = mDigit % 10;
            storage += xDigit;
            mDigit /= 10;
        }
    }
    storage += mDigit;

while(newNum > 99){
    newNum /=pow(10,2);
    digit = newNum % 10;
    mDigit = digit * 2;
    if (mDigit > 9){
        while (mDigit >= 10){
            xDigit = mDigit % 10;
            storage += xDigit;
            mDigit /= 10;
        }
    }
    storage += mDigit;
}

digit2 = cardNum % 10;
storage2 = digit2;
newNum2 = cardNum;
//newNum2 = cardNum/10;

while(newNum2 > 9){
    newNum2 /= pow(10,2);
    digit2 = newNum2 % 10;
    storage2 +=digit2;
}
totalStorage = storage + storage2;
int totalValid = totalStorage % 10;

if(totalValid != 0){
    printf("INVALID \n");
}
if (totalValid == 0){
    printf("VALID \n");
}



return 0;


}
