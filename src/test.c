int a;
elem b;
set c;
set f;

int main(int argc, float argv) {
    int x;int y;
    int z;

    x=1;
    write(oi);
    x = y = z;
    x = y-z;
    x = 1-z*(y/5);
}

set subsum(set s, int target, int cur_sum, set ans) {
    if(target == cur_sum) return ans;
    else if (s == EMPTY) return EMPTY;
    else {
       int el;
       remove((exists (el in s)) in s);
       if(subsum(s, target, cur_sum, ans)) return ans;
       cur_sum = cur_sum + el;
       add(el in ans);
       if(subsum(s, target, cur_sum, ans)) return ans;
       add(el in s);
       remove (el in s);
       return EMPTY;
    }
}

int adds() {
    set s;
    s = EMPTY;

    add(1 in s);
    add(2 in s);
    add(5 in s);
    add(8 in s);
}

    set possibleSums;
    possibleSums = EMPTY;
    int x;
    
    forall (x in s) {
        set sumsWithX;   
        sumsWithX = EMPTY;
        int val;
        forall (val in possibleSums) add((x + val) in sumsWithX);
        forall (val in sumsWithX) add (val in possibleSums);
        if (13 in possibleSums) writeln('y'); else writeln('n');
    }
}