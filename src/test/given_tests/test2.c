//programa na nova linguagem (calcula subset_sum).

int main() {
    set s;
    s = EMPTY;

    add(1 in s);
    add(2 in s);
    add(5 in s);
    add(8 in s);

// Alternativamente: add(1 in add(2 in add(5 in add(8 in s))));

    set possibleSums;
    possibleSums = EMPTY;
    int x;
    int y;
    
    forall (x in s) {
        set sumsWithX;   
    }
}