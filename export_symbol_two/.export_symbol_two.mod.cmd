cmd_/home/zy/lab/export_symbol/export_symbol_two/export_symbol_two.mod := printf '%s\n'   export_symbol_two.o | awk '!x[$$0]++ { print("/home/zy/lab/export_symbol/export_symbol_two/"$$0) }' > /home/zy/lab/export_symbol/export_symbol_two/export_symbol_two.mod
