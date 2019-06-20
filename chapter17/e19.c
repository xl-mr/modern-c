#include <stdio.h>
#include <string.h>

void new_cmd(void) 
{
    printf("new_cmd\n");
}

void open_cmd(void)
{
    printf("open_cmd\n");
}

void close_cmd(void)
{
    printf("close_cmd\n");
}

struct cmd {
    const char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] = {
    {"new", new_cmd}, 
    {"open", open_cmd},
    {"close", close_cmd}
};


void search(const char *cmd_name)
{
    int i;

    for (i = 0; i < 3; i++) {
        if (strcmp(file_cmd[i].cmd_name, cmd_name) == 0) {
            file_cmd[i].cmd_pointer();
        }
    }
}

int main(void)
{
    search("new");
    search("open");
    search("close");

    return 0;
}
