#include "ladder.h"

int main() {
    set<string> word_list;
    string file_name = "words.txt";
    load_words(word_list, file_name);

    string start, end;
    cout << "Enter start word: ";
    cin >> start;
    cout << "Enter end word: ";
    cin >> end;
    vector<string> ladder = generate_word_ladder(start, end, word_list);
    cout << "Word ladder from " << start << " to " << end << ":" << endl;
    print_word_ladder(ladder);

    return 0;
}
