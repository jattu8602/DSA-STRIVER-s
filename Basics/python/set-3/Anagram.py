def is_anagram(s1,s2):
    return sorted(s1) ==sorted(s2)

string = input("enter the first string:")
string1 = input("enter the second string:")

if is_anagram(string,string1):
    print("the strings are anagrams")
else:
    print("the strings are not anagrams")