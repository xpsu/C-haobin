/*
 * Created by 14027 2019/12/27 17:24
 */
// 第一种方式，只定义数据类型，不定义变量，相当于模板（推荐）
struct Student {
    int age;
    float score;
    char sex;
};

// 第二种方式，既定义数据类型，又定义变量
struct Student2 {
    int age;
    float score;
    char sex;
} jack, musk;

// 第三种，只定义变量，不定义数据类型，后面不用结构体名，也不能在增加
struct {
    int age;
    float score;
    char sex;
} marry, job;

// 推荐第一种
