#ifndef _NDCTL_BUILTIN_H_
#define _NDCTL_BUILTIN_H_
extern const char ndctl_usage_string[];
extern const char ndctl_more_info_string[];

struct cmd_struct {
	const char *cmd;
	int (*fn)(int, const char **, void *ctx);
};

int cmd_create_nfit(int argc, const char **argv, void *ctx);
int cmd_enable_namespace(int argc, const char **argv, void *ctx);
int cmd_create_namespace(int argc, const char **argv, void *ctx);
int cmd_destroy_namespace(int argc, const char **argv, void *ctx);
int cmd_disable_namespace(int argc, const char **argv, void *ctx);
int cmd_enable_region(int argc, const char **argv, void *ctx);
int cmd_disable_region(int argc, const char **argv, void *ctx);
int cmd_enable_dimm(int argc, const char **argv, void *ctx);
int cmd_disable_dimm(int argc, const char **argv, void *ctx);
int cmd_zero_labels(int argc, const char **argv, void *ctx);
int cmd_read_labels(int argc, const char **argv, void *ctx);
int cmd_init_labels(int argc, const char **argv, void *ctx);
int cmd_check_labels(int argc, const char **argv, void *ctx);
int cmd_list(int argc, const char **argv, void *ctx);
#ifdef ENABLE_TEST
int cmd_test(int argc, const char **argv, void *ctx);
#endif
#ifdef ENABLE_DESTRUCTIVE
int cmd_bat(int argc, const char **argv, void *ctx);
#endif
#endif /* _NDCTL_BUILTIN_H_ */