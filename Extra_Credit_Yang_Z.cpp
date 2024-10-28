//Yang Zhang
//Extra Credit Exam
//10.28.2024

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main () {

//Question 1
    cout << endl;
    cout << endl;
    cout << "QUESTION 1" << endl;
    cout << endl;
	string order = "Popcorn";
	double cost = 8.00;
	int count = 20;
	cout << fixed << setprecision(2);
	if (order == "Popcorn")
	{
		if (count <= 5)
		{
			cout << "Pick up at Counter. \n";
			cost -= 1.00;
		}
		else
		{
			cout << "Five free! \n";
			count += 5;
		}

			cout << '$' << cost << ' ' << count << endl;
		}
		else
			order = "Fries";

		cout << order << ": $" << cost + 2 * count << endl;

/*
Five free! 
$8.00 25
Popcorn: $58.00
*/


    //Question 2
    cout << endl;
    cout << endl;
    cout << "QUESTION 2" << endl;
    cout << endl;
    int weekinSemester = 6, limit = 10;
    while (weekinSemester < limit)
    {
        cout << "week #: " << weekinSemester << endl;
        weekinSemester++;
    }
    cout << weekinSemester << "\tFINISHED!"; 

    /*
    week #: 6
    week #: 7
    week #: 8
    week #: 9
    10      FINISHED!
    */


    //Question 3
    cout << endl;
    cout << endl;
    cout << "QUESTION 3" << endl;
    cout << endl;
    cout << endl;
    int integer = 1;
    while (integer >= 1 && integer <= 500) {
        cout << integer << ", ";
        integer = integer + 1;
    }
    cout << endl;

    /*
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500,
    */


    //Question 4
    cout << endl;
    cout << endl;
    cout << "QUESTION 4" << endl;
    cout << endl;
    char code;
    double salary;
    cout << "Input a letter code followed by a salary: ";
    cin >> code >> salary;
    if (code < 'n' && code >= 'a' && salary < 70000) {
        cout << "Get a raise!" << endl;
    }
    else {
        cout << "???" << endl;
    }

    /*
    Input a letter code followed by a salary: b 60
    Get a raise!
    */

   //Question 5
    cout << endl;
    cout << endl;
    cout << "QUESTION 5" << endl;
    cout << endl;
    char letter = 'Q'; //Missing single quotes
    int x = 0; //Added x value so that the while loops runs
    while (x < 4)
    {
        if (letter == 'Z' || letter == 'p') //Added 'letter == ' to make code run
            letter = 'A';
        else if (letter == 'Y') { //Missing the {}
            letter = 'F';
            cout << letter << endl;
        }
        else //Else cannot have an expression
        {
            letter = 'W'; //Char value cannot be a string
            cout << "YES" << x; //Double quotes around YES to indicate it is not a variable
            x = 4; //Changed from 0 to 4 so while loop breaks
        } //Missing }
    } //Missing }

    /*
    YES0
    */


    //Quesstion 6
    cout << endl;
    cout << endl;
    cout << "QUESTION 6" << endl;
    cout << endl;
    cout << "47/10 = " << 47 / 10 << endl;
    
    //47/10 = 4

    //Question 7
    cout << endl;
    cout << endl;
    cout << "QUESTION 7" << endl;
    cout << endl;
    cout << "17%9 = " << 17 % 9 << endl;

    //17%9 = 8

    //Question 8 and 9 are true or false questions

    //Question 10
    cout << endl;
    cout << endl;
    cout << "QUESTION 10" << endl;
    cout << endl;

    char grade;
    cout << "Input a letter grade";
    cin >> grade;

    switch (grade) 
        {
        case 'A':
        cout << "The grade point is 4.0.";
        break;
        case 'B':
        cout << "The grade point is 3.0.";
        break;
        case 'C':
        cout << "The grade point is 2.0.";
        break;
        case 'D':
        cout << "The grade point is 1.0.";
        break;
        case 'F':
        cout << "The grade point is 0.0.";
        break;
        default:
        cout << "The grade is invalid.";
        }
    
    /*
    Input a letter grade0
    The grade is invalid.
    */


    //Question 11
    cout << endl;
    cout << endl;
    cout << "QUESTION 11" << endl;
    cout << endl;

    double totalFee; //the total number amount of fees
    int numChecks; //number of checks
    double bankBal; //bank balance

    cout << "Input bank balance: "; //Prompts user for bank balance
    cin >> bankBal; //inputs response as bank balance
    cout << "Input amount of checks: ";
    cin >> numChecks;

    if (bankBal <= 0) { //if bank balace is negative or 0 end the code
        cout << "acount is overdrawn." << endl;
        return 0; //ends code early
    }
    else if (bankBal < 400) //if the bank balance is below 400 then have extra fee
        totalFee = totalFee + 25;
    else //Else if the bank balace is above 400 have the regular fee
        totalFee = totalFee + 10;

    if (numChecks < 0) { //If the number of checks is negative end the code early.
        cout << "invaild amount of checks" << endl;
        return 0;
    }

    if (numChecks < 20) //If num of checks is less then 20
        totalFee = totalFee + (numChecks * 0.10); //the total fees is equal to the total fee plus the number of checks times the rate
    else if (numChecks >= 20 && numChecks <= 39) //If num of checks is between 20 and 39
        totalFee = totalFee + (numChecks * 0.08);
    else if (numChecks >= 40 && numChecks <= 59)
        totalFee = totalFee + (numChecks * 0.06);
    else if (numChecks >= 60)
        totalFee = totalFee + (numChecks * 0.04);
    
    cout << setprecision(2) << fixed << endl; //makes the numbers be fixed and round to the second decimal
    cout << "Total bank fees for this month is $" << totalFee << endl;

    /*
    Input bank balance: 4000
    Input amount of checks: 10

    Total bank fees for this month is $11.00
    */

return 0;
}


/*
QUESTION 1

Five free!
$8.00 25
Popcorn: $58.00


QUESTION 2

week #: 6
week #: 7
week #: 8
week #: 9
10      FINISHED!

QUESTION 3


1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500,


QUESTION 4

Input a letter code followed by a salary: s 9
???


QUESTION 5

YES0

QUESTION 6

47/10 = 4


QUESTION 7

17%9 = 8


QUESTION 10

Input a letter grade o
The grade is invalid.

QUESTION 11

Input bank balance: 4000
Input amount of checks: 10

Total bank fees for this month is $11.00
*/