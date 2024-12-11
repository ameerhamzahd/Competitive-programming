/*
----------------------------------------
     السلام عليكم ورحمة الله وبركاته
    بِسْــــــــمِ اٌللَّهِ اٌلرَّحْمَنِ اٌلرَّحِيْـــــــــمِ
    1% CHANCE, 99% FAITH
            ameerhamzah.d
----------------------------------------
*/

// Question:

// Write a C program that takes the birth year and date, along with the death year and date (if
// applicable), to calculate how many times a person could have voted in their lifetime. The
// program will also determine how many times the person actually participated in voting based on
// the legal voting age (18 years old).

// The voting system in our country started on 7 March 1973. After this date, national elections
// occur every 5 years. A person is eligible to vote starting from the election after their 18th
// birthday.

// Your task is to:
// ● Calculate how many elections took place during the person's lifetime.
// ● Determine how many elections the person could have participated in, considering they
// can vote only after turning 18.

// Input: 
// 1st line take input Birth Year, Birth Month, Birth Date
// 2nd line takes input Death Year, Death Month, Death Date are all integers.

// Output:
// Total Elections: The total number of elections that took place in the person's lifetime
// Eligible Elections: The number of elections the person was eligible to participate in (after turning 18).

// Sample Input
// 1960 08 15
// 2020 10 20

// Sample Output
// Total Election: 10
// Eligible Elections: 8

// Sample Input
// 1973 02 15
// 1993 01 20

// Sample Output
// Total Election: 4
// Eligible Elections: 0

// Sample Input
// 1973 05 15
// 1993 08 20

// Sample Output
// Total Election: 4
// Eligible Elections: 1

// 1st test case:
// Birth 1960, Election start from 1973-03-07, Death year 2020, Death month 10, Death date 20
// Election year: 1973-1978-1983-1988-1993-1998-2003-2008-2013-2018
// Eligible for vote(18 year): 1960+18 = 1978; 1978-08-15
// 1983-1988-1993-1998-2003-2008-2013-2018 (1978 is not in count. Think!!!)


#include <stdio.h>

int isEligible(int electionYear, int eligibleYear, int eligibleMonth, int eligibleDay)
{
    if (electionYear > eligibleYear)
        return 1;
    if (electionYear == eligibleYear && eligibleMonth <= 3 && eligibleDay <= 7)
        return 1;
    return 0;
}

int main()
{
    int bY, bM, bD;
    int dY, dM, dD;
    scanf("%d %d %d", &bY, &bM, &bD);
    scanf("%d %d %d", &dY, &dM, &dD);
    int eY = 1973;
    int eM = 03;
    int eD = 07;
    int eligibleYear = bY + 18;
    int eligibleMonth = bM;
    int eligibleDay = bD;
    if (eligibleYear < eY ||
        (eligibleYear == eY && eligibleMonth < eM) ||
        (eligibleYear == eY && eligibleMonth == eM && eligibleDay < eD))
    {
        eligibleYear = eY;
        eligibleMonth = eM;
        eligibleDay = eD;
    }
    int totalElections = 0, eligibleElections = 0;
    for (int i = eY; i <= dY; i += 5)
    {
        if (((i > bY) || (i == bY && bM < 03) || (i == bY && bM == 03 && bD <= 07)) && ((i < dY) || (i == dY && dM > 03) ||
            (i == dY && dM == 03 && dD >= 07)))
        {
            totalElections++;

            if (isEligible(i, eligibleYear, eligibleMonth, eligibleDay))
            {
                eligibleElections++;
            }
        }
    }
    printf("Total Elections: %d\n", totalElections);
    printf("Eligible Elections: %d\n", eligibleElections);

    return 0;
}