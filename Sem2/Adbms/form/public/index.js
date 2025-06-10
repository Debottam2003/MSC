// alert("hello world");
const form = document.querySelector('form');

form.addEventListener('submit', async (e) => {
    e.preventDefault();
    const name = document.getElementById('name').value;
    const email = document.getElementById('email').value;
    const phone = document.getElementById('phone').value;
    console.log(name, email, phone);
    try {
        let response = await fetch("http://localhost:3333/login", {
            method: 'POST',
            headers: {
                'Content-type': 'application/json'
            },
            body: JSON.stringify({ name, email, phone })
        });
        let data = await response.text();
        alert(data);
        form.reset();
    } catch (err) {
        alert(err.message);
    }
});