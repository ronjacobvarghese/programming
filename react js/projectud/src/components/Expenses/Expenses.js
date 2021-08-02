
import "./expenses.css";
import Card from "../UI/Card";
import ExpenseFilter from "./ExpenseFilter";
import { useState } from "react";
import ExpensesList from "./ExpensesList";
import ExpensesChart from './ExpensesChart'

function Expenses(props) {
  
  const [selectyear, setSelectYear] = useState("2020");

  const filterExpenses = props.items.filter((item) => {
    return item.date.getFullYear().toString() === selectyear;
  });

  function transYear(retrieveYear) {
    setSelectYear(retrieveYear);
  }

  return (
    <Card className="expenses">
      <ExpenseFilter defaultYear={selectyear} onRetrieval={transYear} />
      <ExpensesChart expenses={filterExpenses}/>
      <ExpensesList items={filterExpenses}/>
    </Card>
  );
}
export default Expenses;
