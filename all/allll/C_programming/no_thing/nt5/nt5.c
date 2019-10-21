#include <stdio.h>
#include <string.h>
#include <libxml/parser.h>

int main()
{
    xmlDoc         *document;
    xmlNode        *root, *first_child, *node, *t, *t1, *t11;
    //char           *filename;

    // if (argc < 2) {
    //     fprintf(stderr, "Usage: %s filename.xml\n", argv[0]);
    //     return 1;
    // }
    // filename = argv[1];

    document = xmlReadFile("a.xml", NULL, 0);
    root = xmlDocGetRootElement(document);
    fprintf(stdout, "Root is <%s> (%d)\n", root->name, root->type);
    t = root->children;
    fprintf(stdout, "%s.....%i",t->name, t->type);
    t1 = t->children;
    fprintf(stdout, "\n%s",t1->name);
    printf("\n%s",t1->name);
    // t11 = t1->children;
    // fprintf(stdout, "\n%s.....%i",t11->name, t11->type);
    // first_child = root->children;
    // for (node = first_child; node; node = node->next) {
    //     fprintf(stdout, "\t Child is <%s> (%i)\n", node->name, node->type);
    // }
    fprintf(stdout, "...\n");
    return 0;
}