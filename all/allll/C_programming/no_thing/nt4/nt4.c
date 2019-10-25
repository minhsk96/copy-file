#include <stdio.h>
#include <libxml/parser.h>
 
/*gcc `xml2-config --cflags --libs` test.c*/
 
int is_leaf(xmlNode * node)
{
  xmlNode * child = node->children;
  while(child)
  {
    if(child->type == 1) return 0; 
 
    child = child->next;
  }
 
  return 1;
}
 
void print_xml(xmlNode * node, int indent_len)
{
    while(node)
    {
        if(node->type == 1) 
        {
          // nếu is_leaf(node) đúng thì in ra xmlNodeGetContent(node). không thì in ra xmlGetProp(node, "id")
          printf("%*c%s:%s\n", indent_len*2, '-', node->name, is_leaf(node)?xmlNodeGetContent(node):xmlGetProp(node, "id"));
        }
        print_xml(node->children, indent_len + 1);
        node = node->next;
    }
}
 
int main(){
  xmlDoc *doc = NULL;
  xmlNode *root_element = NULL;
 
  doc = xmlReadFile("return_file.xml", NULL, 0);                                                                                          
 
  if (doc == NULL) {
    printf("Could not parse the XML file");
  }
 
  root_element = xmlDocGetRootElement(doc);
 
  print_xml(root_element, 1);
 
  xmlFreeDoc(doc);
 
  xmlCleanupParser();
}