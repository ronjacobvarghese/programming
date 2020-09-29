import React from "react";
import db from './firebase';
import {ListItem,ListItemText} from '@material-ui/core';
import logo from "./triple.svg";
function Comment(props) {
return (  
    <ListItem>
    <div class="drop-wrapper">
    <img src={logo} alt="logo"></img>
        <ul>
            <li>Delete</li>
            <li>edit</li>
        </ul>
    </div>
    <ListItemText primary={props.comment} secondary={props.name} />
    </ListItem>
);
}

export default Comment;
