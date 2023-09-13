#include <iostream>
#include "factura.h"
using namespace std;
int main() {
    
    Invoice invoice("502", "Widget", 10, 50);

    cout << "Número de pieza: " << invoice.getPartNumber() << endl;
    cout << "Parte Descripción: " << invoice.getPartDescription() << endl;
    cout << "Cantidad: " << invoice.getQuantity() <<endl;
    cout << "Precio por ítem: $" << invoice.getPricePerItem() <<endl;
    cout << "Tipo de IVA: " << invoice.getVatRate() <<endl;
    cout << "Tasa de descuento: " << invoice.getDiscountRate() <<endl;

   // Calcular y mostrar el importe de la factura
    std::cout << "Monto de la factura: $" << invoice.getInvoiceAmount() << std::endl;

    return 0;
}