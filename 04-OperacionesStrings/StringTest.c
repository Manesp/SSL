/*
SSL
04-OperacionesStrings
Manuel Ignacio Espina
170.366-3
*/

#include <stdio.h>
#include "string.h"
#include <assert.h>

void main(){
    testGetLength();
    testPower();
    testAreEqual();
    testIsEmpty();
}

void testGetLength(){
    assert(1 == GetLength("a"));
    assert(0 == GetLength(""));
    assert(5 == GetLength("ababa"));
}

void testPower(){
    assert(AreEqual("", Power("a", 0)));
    assert(AreEqual("bababa", Power("ba", 3)));
    assert(AreEqual("ba", Power("ba", 1)));
    assert(AreEqual("aaaa", Power("a", 4)));
}

void testAreEqual(){
    assert(AreEqual("aaa", "aaa"));
    assert(!AreEqual("ababa", "bababab"));
    assert(!AreEqual("", "1234"));
    assert(AreEqual("ababa", "ababa"));
}

void testIsEmpty(){
    assert(IsEmpty(""));
    assert(!IsEmpty("lala"));
    assert(!IsEmpty("   "));
    assert(!IsEmpty("bababa"));
}

