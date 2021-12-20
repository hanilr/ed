// HELP SECTION //

#define GITHUB " https://github.com/hanilr/ed.git"

#define FEEDBACK " https://github.com/hanilr/ed/issues/"

#define NOT_ENOUGH_ENTRY " Wrong or missing entry! If you not sure what's going on, you can type '-h' for help." 

#define HELP "[WARNING!] If you enter a string with space then you must use 'This is example!' or results may be false.\n\n Github Link - 'ed github'\n Feedback Link - 'ed feedback'\n\n Guide Of Writing A Rule - 'ed -r'\n Add Rule - 'ed config add <rule-name> <rule>'\n Delete Rule - 'ed config del <rule-name>'\n Add Data - 'ed data add <data-name> <data>'\n Delete Data - 'ed data del <data-name>'\n\n Encoding For Integer - 'ed encode int <rule-name> <integer>'\n Encoding For String - 'ed encode str <rule-name> <string>'\n Decoding For Integer - 'ed decode int <rule-name> <integer>'\n Decoding For String - 'ed decode str <rule-name> <string>'"

#define RULE " OPERATION SYMBOLS:\n' + ' - Addition\n' - ' - Subtraction\n' * ' - Multiplication\n' / ' - Division\n\n Rules Of Rule:\n1. There must be a space after each symbol..\n2. The numbers you enter must be digits.\n3. Must have only one operation per line.\n4. Every rule must have only '#' in last line.\n5. Strings are first converted to ascii and then operations are then converted back to string.\n\n Examples:\n\n-Inside Of Rule File-\n+ 1\n- 1\n* 2\n/ 2\n#\n\n-In Command Line-\n> ed config add <rule-name> '+ 1.- 1.* 2./ 2.n#'\n[WARNING!] Must use '.' instead of '\\n' in terminal."

// MADE BY @hanilr //