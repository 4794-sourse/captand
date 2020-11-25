int findString(char** words, int wordsSize, char* s){
    int l = 0, r = wordsSize - 1, mid;
    while (l <= r) {
        while (strlen(words[l]) == 0) {
            l++;
        }
        while (strlen(words[r]) == 0) {
            r--;
        }
        mid = (l + r) / 2;
        while (strlen(words[mid]) == 0) {
            mid++;
        }
        if (!strcmp(words[mid], s)) {
            return mid;
        } else if(strcmp(words[mid], s) > 0){
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}
