class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        for(int i=0;i<length;i++)
        {
            while(numbers[i]!=i&&numbers[numbers[i]]!=numbers[i])
            {
                swap(numbers[i],numbers[numbers[i]]);
            }
        }
        for(int i=0;i<length;i++)
        {
            if(numbers[i]!=i)
             {
                *duplication=numbers[i];
                return true;
            }
        }
        return false;
    }
};
