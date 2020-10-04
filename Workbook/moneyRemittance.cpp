#include "moneyRemittance.h"

MoneyRemittance::MoneyRemittance():customerWallet(),m_accNum(0),m_bank(""),m_ifscCode(""){}

MoneyRemittance::MoneyRemittance(std::string name,std::string mobNum,std::string id,int accNum,std::string bank,std::string ifsc):
customerWallet(name,mobNum,id,0),m_accNum(accNum),m_bank(bank),m_ifscCode(ifsc){}

void MoneyRemittance ::credit(double amt){
// Credit the balance to Bank accout
w_balance -= amt ;
}

void MoneyRemittance ::debit(double amt){
// Credit the balance to Bank accout
w_balance += amt ;
}

double MoneyRemittance::getAcBal(){
    return w_balance;
}

int MoneyRemittance::getAccNumber(){
    return m_accNum;
}

std::string MoneyRemittance::getBankName(){
    return m_bank;
}

std::string MoneyRemittance::getIfscCode(){
    return m_ifscCode;
}