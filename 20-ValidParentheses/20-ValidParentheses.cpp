// Last updated: 7/12/2026, 12:24:16 PM
else if(ch=='}'){
    if(last!='{') return false;
}
else st.pop();  // ❌ Only executes when ch != '}'