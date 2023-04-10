#include <iostream>
#include <algorithm>

using namespace std;
class Card {
public :
    char color;
    int num;

    bool operator < (const Card &card) const {
        return this->num < card.num;
    }
};
int is_seq5(Card cards[]);
int is_color(Card cards[]);
int is_same4(Card card[]);
int is_same32(Card card[]);
int is_same3(Card card[]);
int is_same22(Card card[]);
int is_same2(Card card[]);

int main() {
    Card cards[5];

    int point = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> cards[i].color >> cards[i].num;
    }
    sort(cards, cards + 5);
    if (is_color(cards) && is_seq5(cards)) {
        point += is_color(cards) + is_seq5(cards) - 200 - cards[4].num;
    } else if (is_same4(cards)) {
        point = is_same4(cards);
    } else if (is_same32(cards)) {
        point = is_same32(cards);
    } else if (is_color(cards)) {
        point = is_color(cards);
    } else if (is_seq5(cards)) {
        point = is_seq5(cards);
    } else if (is_same3(cards)) {
        point = is_same3(cards);
    } else if (is_same22(cards)) {
        point = is_same22(cards);
    } else if (is_same2(cards)) {
        point = is_same2(cards);
    } else {
        point += 100;
        point += cards[4].num;
    }
    cout << point << endl;
    return 0;
}

int is_seq5(Card cards[]) {
    if ((cards + 4)->num - (cards)->num == 4)
        return (500 + cards[4].num);
    return 0;
}

int is_color(Card cards[]) {
    char color = cards[0].color;

    for (int i = 0; i < 5; ++i) {
        if (cards[i].color != color)
            return 0;
    }
    return (600 + cards[4].num);
}

int is_same4(Card cards[]) {
    if (cards[0].num == cards[3].num || cards[1].num == cards[4].num)
        return (800 + cards[2].num);
    return 0;
}

int is_same32(Card cards[]) {
    if (cards[0].num == cards[2].num && cards[3].num == cards[4].num)
        return (700 + cards[2].num * 10 + cards[3].num);
    else if (cards[2].num == cards[4].num && cards[0].num == cards[1].num)
        return (700 + cards[2].num * 10 + cards[1].num);
    else
        return 0;
}

int is_same3(Card cards[]) {
    if (cards[0].num == cards[2].num || cards[1].num == cards[3].num ||
        cards[2].num == cards[4].num)
        return (400 + cards[2].num);
    return 0;
}

int is_same22(Card cards[]) {
    int cnt = 0;
    int max = 0, min = 10;
    for (int i = 1; i < 5; ++i) {
        if (cards[i].num == cards[i - 1].num) {
            cnt++;
            if (max < cards[i].num)
                max = cards[i].num;
            if (min > cards[i].num)
                min = cards[i].num;
        }
    }
    if (cnt == 2)
        return (300 + max * 10 + min);
    else
        return 0;
}

int is_same2(Card cards[]) {
    for (int i = 1; i < 5; ++i) {
        if (cards[i].num == cards[i - 1].num)
            return (200 + cards[i].num);
    }
    return 0;
}
