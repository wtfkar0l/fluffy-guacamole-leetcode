#include <iostream>
#include <vector>
#include <algorithm>
//entrada: array de numeros
//objetivo: para cada numero, iterar dentro de um array de contagem, e verificar quas numeros nessa contagem sao iguais a um, e retornar a quantidade de numeros que aparecem somente uma vez.

//exemplo:
// [2,4,5,2,4,6,8]
// array[0] = 0; array[1] = 0; array[2] = 2, ..., array[5] = 1 ...
// resultado counter = 3
// xor solution

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        int single = nums[0]; // inicializa a verificacao de single com o primeiro da lista
        for (int i = 1; i < size; i++) {
            single = single ^ nums[i];
        }
    return single;
    }
};

