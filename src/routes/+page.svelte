<script>
    export let productId = 1000;
    import {goto, beforeNavigate, afterNavigate} from '$app/navigation';
    const handleClick = () => {
        console.log('Placing your order');
        goto ('/products');
    }

    beforeNavigate((navigation) => {
        console.log({before: navigation});
    });
    afterNavigate((navigation) => {
        console.log({after: navigation});
    });
</script>

<div class="page">
    <h2>Welcome Home</h2>
    <p>This is a paragraph1</p>
    <a href="/products/1">Product 1</a>
    <a href={`/products/${productId}`}>Product {productId}</a>
    <button on:click={handleClick}>Place order</button>
</div>

<style>
    .page {
        text-align: center;
        display: block;
        margin: 20px auto;
    }
</style>