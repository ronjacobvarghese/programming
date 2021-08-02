import './expenseitem.css';
import ExpenseDate from './ExpenseDate';
import Card from '../UI/Card';
import React from 'react';




function ExpenseItem(props) {
    return (
    <li>
        <Card className="expense-item">
        <ExpenseDate object={props.object.date}/>
        <div className="expense-item__description">
            <h2>{props.object.title}</h2>
            <div className="expense-item__price">{props.object.amount}</div>
        </div>{/*note we only use a pointer to the function clickHandler rather than calling the function ie clickHandler()(this is because calling the function only happens once and that is when the code is being parsed)*/}

    </Card>
    </li>

    );
}

export default ExpenseItem;
