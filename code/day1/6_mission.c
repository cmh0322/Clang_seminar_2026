/**
 * @author  Minhyuk Choi (pianoguy0322@gmail.com)
 * @brief   function that upgrades scores by 5 points using pointer arithmetic
 */

void upgrade_score(int *p_score) {
    for (int i = 0; i < 5; i++) {
        p_score[i] += 5; 
    }
    printf("\n[시스템] 모든 점수가 5점씩 업그레이드되었습니다.\n\n");
}

int main() {
    int scores[5] = {80, 62, 90, 92, 74};
    int *ptr = scores;

    printf("=== 미션 1: 수정 전 점수 ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Score[%d]: %d (주소: %p)\n", i, *(ptr + i), (ptr + i));
    }

    upgrade_score(ptr);

    printf("=== 미션 3: 수정 후 점수 ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Score[%d]: %d\n", i, scores[i]);
    }

    return 0;
}