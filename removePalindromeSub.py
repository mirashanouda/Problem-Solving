def removePalindromeSub(self, s: str) -> int:
        if (s == s[::-1]): #reads backword with a step of -1
            return 1
        return 2
    #the key point here is that if the whole word is paledrom, then 
    #we can remove it with only one step
    #if not we use the fact that only 'a' and 'b' are used && 
    #sebsequence is not necessarly a contanous string "not sub string"
    #so if the word itself is not palendrom, then any seqence of aaa's and bbb's
    #is acceptable
