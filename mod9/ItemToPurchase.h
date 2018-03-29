 #ifndef  ITEMTOPURCHASE__INC__
 #define  ITEMTOPURCHASE_INC__

 typedef struct ItemToPurchase
{
    char itemName [50];
    char itemDescription [50];
    int itemPrice;
    int itemQuantity;
}ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item); //Make sure to dereference when trying to print (->)
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */
