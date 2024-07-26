/*
// "AJAX Vote" Plugin for Joomla! 1.0.x - Version 1.0
// License:http://www.gnu.org/copyleft/gpl.html
// Authors:George Chouliaras - Fotis Evangelou - Luca Scarpa
// Copyright (c) 2006 - 2007 JoomlaWorks.gr - http://www.joomlaworks.gr
// Project page at http://www.joomlaworks.gr - Demos at http://demo.joomlaworks.gr
// ***Last update:May 14th, 2007***
*/

.jwajaxvote-star-rating,
.jwajaxvote-star-rating a:hover,
.jwajaxvote-star-rating .current-rating {background:url(star.gif) left -1000px repeat-x;}
.jwajaxvote-star-rating  {position:relative;width:125px;height:25px;overflow:hidden;list-style:none;margin:0;padding:0;background-position:left top;}
.jwajaxvote-star-rating li {display:inline;background-image:none;padding:0;}
.jwajaxvote-star-rating a, 
.jwajaxvote-star-rating .current-rating {position:absolute;top:0;left:0;text-indent:-1000em;height:25px;line-height:25px;outline:none;overflow:hidden;border:none;cursor:pointer;}
.jwajaxvote-star-rating a:hover {background-position:left bottom;}
.jwajaxvote-star-rating a.one-star {width:20%;z-index:6;}
.jwajaxvote-star-rating a.two-stars {width:40%;z-index:5;}
.jwajaxvote-star-rating a.three-stars {width:60%;z-index:4;}
.jwajaxvote-star-rating a.four-stars {width:80%;z-index:3;}
.jwajaxvote-star-rating a.five-stars {width:100%;z-index:2;}
.jwajaxvote-star-rating .current-rating {z-index:1;background-position:left center;}	
/* for an inline rater */
.jwajaxvote-inline-rating {display:-moz-inline-block;display:-moz-inline-box;display:inline-block;vertical-align:middle;line-height:25px;}
.jwajaxvote-box {margin-left:5px;}

/* --- End of stylesheet --- */