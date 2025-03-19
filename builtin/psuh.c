#include "builtin.h"
#include "gettext.h"

int cmd_psuh(int argc, const char **argv, const char *prefix, struct repository *repo) {
    (void)argc;
    (void)argv;
    (void)prefix;
    (void)repo;
    printf(_("Pony saying hello goes here.\n"));
	return 0;
}
