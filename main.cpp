#include "board.hpp"

int position_Y = 5;
int position_X = 5;

const int a = 20;
const int b = 10;

const int box_Y = 5;
const int box_X = 5;

int check[box_Y][box_X];

/////////////////////////////////////////////////////////////////////////
//////////////////////////////making figure//////////////////////////////
/////////////////////////////////////////////////////////////////////////
int shape;

void making_figure()
{
    int I[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 2, 0},
        {0, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int II[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0},
        {0, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int III[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 2, 2, 0},
        {0, 2, 2, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int IV[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 2, 0, 0},
        {0, 0, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int V[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 2, 0, 0},
        {0, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int VI[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 2, 2, 0},
        {0, 0, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int VII[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {2, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int VIII[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 2, 2, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int IX[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 2, 0, 0},
        {0, 2, 2, 2, 0},
        {0, 0, 2, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int X[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 2, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int XI[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 2, 2, 2, 0},
        {0, 0, 2, 0, 0},
        {0, 0, 2, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int XII[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 2, 2, 2, 0},
        {0, 2, 0, 2, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int XIII[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0},
        {0, 2, 2, 0, 0},
        {0, 0, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int XIV[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 2, 0, 0},
        {0, 2, 2, 0, 0},
        {0, 0, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int XV[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {2, 0, 0, 0, 0},
        {2, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int XVI[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 2, 0},
        {2, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int XVII[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 2, 0, 0},
        {2, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int XVIII[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0},
        {2, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int XIX[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0},
        {0, 2, 0, 0, 0},
        {0, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int XX[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 2, 0},
        {0, 0, 0, 2, 0},
        {0, 2, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int XXI[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 2, 2, 0},
        {0, 0, 2, 0, 0},
        {0, 2, 2, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int XXII[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 2, 2, 0, 0},
        {0, 0, 2, 0, 0},
        {0, 0, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };
    int XXIII[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 2, 2, 2},
        {0, 2, 2, 0, 0},
        {0, 0, 0, 0, 0},
    };
    int XXIV[box_Y][box_X] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {2, 2, 2, 0, 0},
        {0, 0, 2, 2, 0},
        {0, 0, 0, 0, 0},
    };

    shape = rand() % 24 + 1;

    switch (shape)
    {
    case 1:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = I[y][x];
            }
        }
        position_Y = -2, position_X = 2;
        break;
    case 2:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = II[y][x];
            }
        }
        position_Y = -2, position_X = 2;
        break;
    case 3:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = III[y][x];
            }
        }
        position_Y = -2, position_X = 3;
        break;
    case 4:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = IV[y][x];
            }
        }
        position_Y = -2, position_X = 3;
        break;
    case 5:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = V[y][x];
            }
        }
        position_Y = -2, position_X = 2;
        break;
    case 6:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = VI[y][x];
            }
        }
        position_Y = -2, position_X = 2;
        break;
    case 7:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = VII[y][x];
            }
        }
        position_Y = -3, position_X = 3;
        break;
    case 8:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = VIII[y][x];
            }
        }
        position_Y = -2, position_X = 2;
        break;
    case 9:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = IX[y][x];
            }
        }
        position_Y = -1, position_X = 3;
        break;
    case 10:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = X[y][x];
            }
        }
        position_Y = -2, position_X = 3;
        break;
    case 11:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XI[y][x];
            }
        }
        position_Y = -1, position_X = 2;
        break;
    case 12:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XII[y][x];
            }
        }
        position_Y = -1, position_X = 2;
        break;
    case 13:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XIII[y][x];
            }
        }
        position_Y = -1, position_X = 2;
        break;
    case 14:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XIV[y][x];
            }
        }
        position_Y = -1, position_X = 2;
        break;
    case 15:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XV[y][x];
            }
        }
        position_Y = -2, position_X = 3;
        break;
    case 16:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XVI[y][x];
            }
        }
        position_Y = -2, position_X = 3;
        break;
    case 17:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XVII[y][x];
            }
        }
        position_Y = -2, position_X = 3;
        break;
    case 18:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XVIII[y][x];
            }
        }
        position_Y = -2, position_X = 3;
        break;
    case 19:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XIX[y][x];
            }
        }
        position_Y = -1, position_X = 3;
        break;
    case 20:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XX[y][x];
            }
        }
        position_Y = -1, position_X = 3;
        break;
    case 21:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XXI[y][x];
            }
        }
        position_Y = -1, position_X = 2;
        break;
    case 22:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XXII[y][x];
            }
        }
        position_Y = -1, position_X = 2;
        break;
    case 23:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XXIII[y][x];
            }
        }
        position_Y = -2, position_X = 2;
        break;
    case 24:
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                check[y][x] = XXIV[y][x];
            }
        }
        position_Y = -2, position_X = 3;
        break;
    }
}

/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////end of the game///////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
bool the_game_is_over = false;

void end_of_the_game(int area[][b])
{
    for (int i_1 = position_Y, i_2 = 0; i_1 < position_Y+box_Y; i_1++, i_2++)
    {
        for (int j_1 = position_X, j_2 = 0; j_1 < position_X+box_X; j_1++, j_2++)
        {
            if (area[i_1][j_1] != 0 && check[i_2][j_2] != 0)
            {
                the_game_is_over = true;
            }
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////falling on the first line//////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
int score = 0;
bool clock_restart = false;

void falling_on_the_first_line_of_boxes(int area[][b])
{
    bool fallen_on_first_line = false;
    for (int i_1 = position_Y, i_2 = 0; i_1 < position_Y+box_Y; i_1++, i_2++)
    {
        for (int j_1 = position_X, j_2 = 0; j_1 < position_X+box_X; j_1++, j_2++)
        {
            if (i_1 == a - 1 && check[i_2][j_2] != 0)
            {
                fallen_on_first_line = true;
            }
        }
    }

    if (fallen_on_first_line)
    {
        for (int i_1 = position_Y, i_2 = 0; i_1 < position_Y+box_Y; i_1++, i_2++)
        {
            for (int j_1 = position_X, j_2 = 0; j_1 < position_X+box_X; j_1++, j_2++)
            {
                if (check[i_2][j_2] != 0)
                {
                    area[i_1][j_1] = check[i_2][j_2];
                    score += 1;
                    clock_restart = true;
                }
            }
        }
    }
    fallen_on_first_line = false;
}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////falling on the other lines//////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
bool move_down_is_possible = true;
bool obstacle = false;
bool found = false;
int vertical_boxes = 0;
int checking_counted_boxes = 0;

void falling_on_the_other_lines(int area[][b])
{
    if (move_down_is_possible == true)
    {
        int area_check[a][b];
        for (int y = 0; y < a; y++)
        {
            for (int x = 0; x < b; x++)
            {
                area_check[y][x] = area[y][x];
            }
        }
        int figure_check[box_X][box_Y];
        for (int y = 0; y < box_Y; y++)
        {
            for (int x = 0; x < box_X; x++)
            {
                figure_check[y][x] = check[y][x];
            }
        }
        for (int i_1 = position_Y+1, i_2 = 0; i_1 < position_Y+box_Y+1; i_1++, i_2++)
        {
            for (int j_1 = position_X, j_2 = 0; j_1 < position_X+box_X; j_1++, j_2++)
            {
                if (area_check[i_1][j_1] != 0 && figure_check[i_2][j_2] != 0)
                {
                    obstacle = true;
                }
            }
        }

        if (found == false)
        {
            for (int y = box_Y - 1; y >= 0; y--)
            {
                if (check[y][0] == 0 && check[y][1] == 0 && check[y][2] == 0 && check[y][3] == 0 && check[y][4] == 0)
                {
                    vertical_boxes++;
                    checking_counted_boxes = vertical_boxes;
                }
                if (check[y][0] != 0 || check[y][1] != 0 || check[y][2] != 0 || check[y][3] != 0 || check[y][4] != 0)
                {
                    found = true;
                    break;
                }
            }
        }
        if (position_Y < a - box_Y + vertical_boxes)
        {
            if (obstacle == false)
            {
                position_Y += 1;
                move_down_is_possible = false;
            } else {
                for (int i_1 = position_Y, i_2 = 0; i_1 < position_Y+box_Y; i_1++, i_2++)
                {
                    for (int j_1 = position_X, j_2 = 0; j_1 < position_X+box_X; j_1++, j_2++)
                    {
                        if (check[i_2][j_2] != 0)
                        {
                            area[i_1][j_1] = check[i_2][j_2];
                            score += 1;
                        }
                    }
                }
                making_figure();
                end_of_the_game(area);
            }
        }
    }
    move_down_is_possible = true;
    obstacle = false;
    found = false;
    vertical_boxes = 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//////////////////////////destroying the full line of boxes//////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
void destroying_the_full_line_of_boxes(int area[][b])
{
    int number = 0;
    for (int y = 0; y < a; y++)
    {
        if (area[y][0] != 0 &&
            area[y][0] == area[y][1] && area[y][1] == area[y][2] && area[y][2] == area[y][3] &&
            area[y][3] == area[y][4] && area[y][4] == area[y][5] && area[y][5] == area[y][6] &&
            area[y][6] == area[y][7] && area[y][7] == area[y][8] && area[y][8] == area[y][9])
        {
            number = y;
            score += 10;
        }
    }

    if (number >= 0)
    {
        for (int number_prev = number - 1, number_last = number; number_prev >= 0; number_prev--, number_last--)
        {
            for (int x_prev = 0, x_last = 0; x_prev < b; x_prev++, x_last++)
            {
                area[number_last][x_last] = area[number_prev][x_prev];
            }
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////rotating the box///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
const int A = 5;
bool allowed = true;

void rotating_the_box(int matrix_source[][A], int area[][b])
{
    int matrix[A][A] = {
        {0, 0, 0, 0, 1},
        {0, 0, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0},
        {1, 0, 0, 0, 0},
    };

    int transpose_matrix[A][A];

    for (int y = 0; y < A; y++)
    {
        for (int x = 0; x < A; x++)
        {
            transpose_matrix[x][y] = matrix_source[y][x];
        }
    }

    int result[A][A];

    for (int y = 0; y < A; y++)
    {
        for (int x = 0; x < A; x++)
        {
            int number = 0;
            for (int i = 0; i < A; i++)
            {
                number += transpose_matrix[y][i] * matrix[i][x];
            }
            result[y][x] = number;
        }
    }

    // Checking if the box can rotate
    int area_check[a+1][b+1];
    for (int y = 0; y < a+1; y++)
    {
        for (int x = 0; x < b+1; x++)
        {
            area_check[y][x] = area[y][x];
        }
    }
    for (int i_1 = position_Y, i_2 = 0; i_1 < position_Y+box_Y; i_1++, i_2++)
    {
        for (int j_1 = position_X, j_2 = 0; j_1 < position_X+box_X; j_1++, j_2++)
        {
            if (area_check[i_1][j_1] != 0 && result[i_2][j_2] != 0)
            {
                allowed = false;
            }

            area_check[i_1][j_1] = result[i_2][j_2];
            if (area_check[i_1][j_1] != 0)
            {
                if (j_1 < 0 || j_1 > b - 1)
                {
                    allowed = false;
                }
                if (i_1 < 0 || i_1 > a - 1)
                {
                    allowed = false;
                }
            }
        }
    }
    if (allowed == true)
    {
        for (int y = 0; y < A; y++)
        {
            for (int x = 0; x < A; x++)
            {
                matrix_source[y][x] = result[y][x];
            }
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////animating//////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
bool move_left_is_possible = true;
bool move_right_is_possible = true;
int horizontal_boxes = 0;
bool pressed_W = false;

void animating(int area[][b])
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        if (move_left_is_possible == true)
        {
            int area_check[a][b];
            for (int y = 0; y < a; y++)
            {
                for (int x = 0; x < b; x++)
                {
                    area_check[y][x] = area[y][x];
                }
            }
            int figure_check[box_X][box_Y];
            for (int y = 0; y < box_Y; y++)
            {
                for (int x = 0; x < box_X; x++)
                {
                    figure_check[y][x] = check[y][x];
                }
            }
            for (int i_1 = position_Y, i_2 = 0; i_1 < position_Y+box_Y; i_1++, i_2++)
            {
                for (int j_1 = position_X-1, j_2 = 0; j_1 < position_X+box_X-1; j_1++, j_2++)
                {
                    if (area_check[i_1][j_1] != 0 && figure_check[i_2][j_2] != 0)
                    {
                        obstacle = true;
                    }
                }
            }
            if (found == false)
            {
                for (int x = 0; x < box_X; x++)
                {
                    if (check[0][x] == 0 && check[1][x] == 0 && check[2][x] == 0 && check[3][x] == 0 && check[4][x] == 0)
                    {
                        horizontal_boxes++;
                        checking_counted_boxes = horizontal_boxes;
                    }
                    if (check[0][x] != 0 || check[1][x] != 0 || check[2][x] != 0 || check[3][x] != 0 || check[4][x] != 0)
                    {
                        found = true;
                        break;
                    }
                }
            }
            if (position_X > 0 - horizontal_boxes)
            {
                if (obstacle == false)
                {
                    position_X -= 1;
                    move_left_is_possible = false;
                }
            }
        }
    } else {
        horizontal_boxes = 0;
        found = false;
        move_left_is_possible = true;
        obstacle = false;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        if (move_right_is_possible == true)
        {
            int area_check[a][b];
            for (int y = 0; y < a; y++)
            {
                for (int x = 0; x < b; x++)
                {
                    area_check[y][x] = area[y][x];
                }
            }
            int figure_check[box_X][box_Y];
            for (int y = 0; y < box_Y; y++)
            {
                for (int x = 0; x < box_X; x++)
                {
                    figure_check[y][x] = check[y][x];
                }
            }
            for (int i_1 = position_Y, i_2 = 0; i_1 < position_Y+box_Y; i_1++, i_2++)
            {
                for (int j_1 = position_X+1, j_2 = 0; j_1 < position_X+box_X+1; j_1++, j_2++)
                {
                    if (area_check[i_1][j_1] != 0 && figure_check[i_2][j_2] != 0)
                    {
                        obstacle = true;
                    }
                }
            }
            if (found == false)
            {
                for (int x = box_X - 1; x >= 0; x--)
                {
                    if (check[0][x] == 0 && check[1][x] == 0 && check[2][x] == 0 && check[3][x] == 0 && check[4][x] == 0)
                    {
                        horizontal_boxes++;
                        checking_counted_boxes = horizontal_boxes;
                    }
                    if (check[0][x] != 0 || check[1][x] != 0 || check[2][x] != 0 || check[3][x] != 0 || check[4][x] != 0)
                    {
                        found = true;
                        break;
                    }
                }
            }
            if (position_X < b - box_X + horizontal_boxes)
            {
                if (obstacle == false)
                {
                    position_X += 1;
                    move_right_is_possible = false;
                }
            }
        }
    } else {
        horizontal_boxes = 0;
        found = false;
        move_right_is_possible = true;
        obstacle = false;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        if (move_down_is_possible == true)
        {
            int area_check[a][b];
            for (int y = 0; y < a; y++)
            {
                for (int x = 0; x < b; x++)
                {
                    area_check[y][x] = area[y][x];
                }
            }
            int figure_check[box_X][box_Y];
            for (int y = 0; y < box_Y; y++)
            {
                for (int x = 0; x < box_X; x++)
                {
                    figure_check[y][x] = check[y][x];
                }
            }
            for (int i_1 = position_Y+1, i_2 = 0; i_1 < position_Y+box_Y+1; i_1++, i_2++)
            {
                for (int j_1 = position_X, j_2 = 0; j_1 < position_X+box_X; j_1++, j_2++)
                {
                    if (area_check[i_1][j_1] != 0 && figure_check[i_2][j_2] != 0)
                    {
                        obstacle = true;
                    }
                }
            }
            if (found == false)
            {
                for (int y = box_Y - 1; y >= 0; y--)
                {
                    if (check[y][0] == 0 && check[y][1] == 0 && check[y][2] == 0 && check[y][3] == 0 && check[y][4] == 0)
                    {
                        vertical_boxes++;
                        checking_counted_boxes = vertical_boxes;
                    }
                    if (check[y][0] != 0 || check[y][1] != 0 || check[y][2] != 0 || check[y][3] != 0 || check[y][4] != 0)
                    {
                        found = true;
                        break;
                    }
                }
            }
            if (position_Y < a - box_Y + vertical_boxes)
            {
                if (obstacle == false)
                {
                    position_Y += 1;
                    move_down_is_possible = false;
                }
            }
        }
    } else {
        vertical_boxes = 0;
        found = false;
        move_down_is_possible = true;
        obstacle = false;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && shape != 6 && shape!= 9 && shape != 10)
    {
        if (!pressed_W)
        {
            allowed = true;
            rotating_the_box(check, area);
            pressed_W = true;
        }
    } else {
        pressed_W = false;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////main/////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(600, 736), "Space TETRIS");
    window.setFramerateLimit(60);

    // Clock
    sf::Clock clock;

    // Texts
    sf::Font font;
    font.loadFromFile("fonts/YandereFont.ttf");

    sf::Text text1;
    text1.setFont(font);
    text1.setCharacterSize(35);
    text1.setFillColor(sf::Color::White);
    text1.setPosition(125, 20);

    sf::Text text2;
    text2.setFont(font);
    text2.setCharacterSize(28);
    text2.setFillColor(sf::Color::White);
    text2.setPosition(30, 96);

    sf::Text text3;
    text3.setFont(font);
    text3.setCharacterSize(28);
    text3.setPosition(34, 360);

    sf::Text text4;
    text4.setFont(font);
    text4.setCharacterSize(28);
    text4.setFillColor(sf::Color::White);
    text4.setPosition(30, 605);

    //Textures
    sf::Texture texture_background;
    sf::Texture texture_gameover;

    if (!texture_background.loadFromFile("textures/corona_rt.png"))
    {
        std::cerr << "Could not load texture" << std::endl;
        return 1;
    }

    if (!texture_gameover.loadFromFile("textures/game_over.png"))
    {
        std::cerr << "Could not load texture" << std::endl;
        return 1;
    }

    sf::Sprite background;
    sf::Sprite gameover;

    background.setTexture(texture_background);
    background.setTextureRect(sf::IntRect(0,0,window.getSize().x,window.getSize().y));

    gameover.setTexture(texture_gameover);
    gameover.setPosition(-70, 200);

    //Sounds
    sf::SoundBuffer start_of_the_game_buffer;
    sf::SoundBuffer displacement_buffer;
    sf::SoundBuffer rotate_buffer;

    if (!start_of_the_game_buffer.loadFromFile("sounds effect/Jingle_Win_00.wav"))
    {
        std::cerr << "Could not load sound" << std::endl;
        return 1;
    }

    if (!displacement_buffer.loadFromFile("sounds effect/Footstep_Dirt_00.wav"))
    {
        std::cerr << "Could not load sound" << std::endl;
        return 1;
    }

    if (!rotate_buffer.loadFromFile("sounds effect/Inventory_Open_01.wav"))
    {
        std::cerr << "Could not load sound" << std::endl;
        return 1;
    }

    sf::Sound start_of_the_game;
    start_of_the_game.setBuffer(start_of_the_game_buffer);

    sf::Sound displacement;
    displacement.setBuffer(displacement_buffer);

    sf::Sound rotate;
    rotate.setBuffer(rotate_buffer);

    // Boxes
    Place_for_boxes boxes[a][b];
    for (int y = 0; y < a; y++)
    {
        int box_Size = 32;
        int box_Edge = 1;
        for (int x = 0; x < b; x++)
        {
            boxes[y][x].square.setPosition(297+(x*(box_Size+box_Edge)-box_Size/2), 87+(y*(box_Size+box_Edge)));
        }
    }

    // Fall_position
    int fall_position[a][b];
    for (int y = 0; y < a; y++)
    {
        for (int x = 0; x < b; x++)
        {
            fall_position[y][x] = 0;
        }
    }

    srand(time(0));
    rand();

    making_figure();

    start_of_the_game.play();

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;

        float time_;

        while (window.pollEvent(event))
        {
            // Close window = exit
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            // Escape = exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
            {
                window.close();
            }

            // Enter = Restart
            if (the_game_is_over == true)
            {
                if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Enter)
                {
                    start_of_the_game.play();
                    the_game_is_over = false;
                    for (int y = 0; y < a; y++)
                    {
                        for (int x = 0; x < b; x++)
                        {
                            fall_position[y][x] = 0;
                        }
                    }
                    making_figure();
                    score = 0;
                    time_ = 0;
                    clock.restart();
                }
            }
        }

        // Clear screen
        window.clear(sf::Color::Black);

        // Load background
        window.draw(background);

        // Movement
        if (!the_game_is_over)
        {
            animating(fall_position);
        }

        destroying_the_full_line_of_boxes(fall_position);

        if (the_game_is_over == false)
        {
            time_ = clock.getElapsedTime().asSeconds();
        }

        float lag = 1.00;
        if (time_ > lag)
        {
            falling_on_the_first_line_of_boxes(fall_position);
            falling_on_the_other_lines(fall_position);
            time_ = 0;
            clock.restart();
        }

        if (clock_restart)
        {
            time_ = 0;
            clock.restart();
            clock_restart = false;
            making_figure();
        }

        // Draw boxes
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                window.draw(boxes[i][j].square);
            }
        }

        // Background color
        for (int y = 0; y < a; y++)
        {
            for (int x = 0; x < b; x++)
            {
                    boxes[y][x].square.setFillColor(sf::Color::Blue);
            }
        }

        // Color of falling boxes
        for (int i_1 = position_Y, i_2 = 0; i_1 < position_Y+box_Y; i_1++, i_2++)
        {
            for (int j_1 = position_X, j_2 = 0; j_1 < position_X+box_X; j_1++, j_2++)
            {
                if (check[i_2][j_2] != 0)
                {
                    boxes[i_1][j_1].square.setFillColor(sf::Color(178, 102, 255));
                }
            }
        }

        // Color of boxes that have fallen
        for (int y = 0; y < a; y++)
        {
            for (int x = 0; x < b; x++)
            {
                if (fall_position[y][x] != 0)
                {
                    boxes[y][x].square.setFillColor(sf::Color(153, 0, 153));
                }
            }
        }

        // Sounds during movement
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)) displacement.play();
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) displacement.play();
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)) displacement.play();
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W) && shape != 6 && shape!= 9 && shape != 10) rotate.play();

        // Draw texts
        text1.setString("Welcome to Space TETRIS");
        window.draw(text1);

        text2.setString("Score " + std::to_string(score));
        window.draw(text2);

        text4.setString("W - rotate\nA - left\nS - down\nD - right");
        window.draw(text4);

        if (the_game_is_over)
        {
            window.draw(gameover);
            text3.setFillColor(sf::Color(rand() % 230, rand() % 180, rand() % 194));
            text3.setString("Enter - play again\nEscape - exit game");
            window.draw(text3);
        }

        window.display();
    }
}
