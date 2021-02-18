// Teste caracteres especiais

set add_i@@@nt(set s) {
    return a¨¨¨¨dd(2 in add(1 in s));
    // {1,2}
}

set add_f°₢₢₢loat(set s) {
    return ad~d(5.4 in add(1.5 in s));
}

set a.dd_set(set s) {
    set ne^w@@@set;
    n^^ew\set\\\\\$% = EMPTY;
    ret^^urn add(add_int(newset) in s);
    //{{1,2}}
}

int main() {
    \ s;
    s = EM&¨%&###TY;

    add_s¨ºet(s);

    // s = {{1,2}}
    * el;
    
    exi)sts(el in s);
    // el is the set {1,2}
    
    a++dd_floa###t(s);
    // {1.5,5.4,{1,2}}

    exis@@ts(el in s);
    // el can be any of 1.5, 5.4 or {1,2}
   
    ad!d_i{nt(s);
    // add_int always returns {1,2} thus the set remains unchanged
    // {1.5,5.4,{1,2}}

    i:}}nt acc; flo;at @accf;
    acc = 0; accf = 0;
    elem x;
    
    forall(x3!@ in s) {
        acc = acc + x; // when x is {1,2} the behaviour is undefined; this may raise an exception at runtime
    ac@@@cf = accf + !@x;
    }

    // this fixes the above
    
    forall(x in s) {
        if (!is_s@@@et(x)) {
           acc = acc + x;
       accf = accf + x;
    }   
    }

   // acc is 6; accf is 6.9

    return 0;
}