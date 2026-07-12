// Last updated: 7/12/2026, 12:20:58 PM
else if(ch=='}'){
    if(last!='{') return false;
}
else st.pop();  // ❌ Only executes when ch != '}'